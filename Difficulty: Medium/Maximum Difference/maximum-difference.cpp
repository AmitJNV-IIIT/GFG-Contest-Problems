//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
 int n =arr.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        
        stack<int>leftStack;
        for(int i=0; i<n;i++){
             
             while(!leftStack.empty() && arr[i]<=leftStack.top()){
                 leftStack.pop();
             }
             
             if(!leftStack.empty()){
                 left[i]=leftStack.top();
             }
             
             leftStack.push(arr[i]);
          
        }
        
        stack<int>rightStack;
        for(int i=n-1; i>=0;i--){
             
             while(!rightStack.empty() && arr[i]<=rightStack.top()){
                 rightStack.pop();
             }
             
             if(!rightStack.empty()){
                 right[i]=rightStack.top();
             }
             
             rightStack.push(arr[i]);
          
        }
        
       
        int maxi=INT_MIN;
        for(int i=0 ; i<n;i++){
            
            
            maxi=max(maxi, abs(left[i]-right[i]));
        }
        
       return maxi; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
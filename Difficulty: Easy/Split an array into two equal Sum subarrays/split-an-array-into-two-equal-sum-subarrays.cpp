//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
       int totalSum = accumulate(arr.begin(),arr.end(),0);
    int LS = 0 ,RS = 0;
    int  n = arr.size();
    for(int i=0;i<n;i++){
        RS+=arr[i];
        LS=totalSum-RS;
        if(LS==RS){
            return true;
        }
    }
    return false; // code here
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends
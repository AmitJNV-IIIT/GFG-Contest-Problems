//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string s) {
       unordered_set<string>st;
            for(int i=0;i<256;i++){
                st.insert(to_string(i));
            }
            
            int cnt=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='.'){
                    cnt++;
                }
            }
            if(cnt != 3){
                return 0;
            }
            
            cnt=0;
            string temp="";
            for(int i=0;i<s.length();i++){
                if(s[i] == '.'){
                    if(st.count(temp) != 0){
                        cnt++;
                    }
                    temp="";
                }
                else{
                temp+=s[i];
                }
            }
            if(st.count(temp) != 0) cnt++;
            
            if(cnt==4){
                return 1;
            }
            
            return 0; // code here
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
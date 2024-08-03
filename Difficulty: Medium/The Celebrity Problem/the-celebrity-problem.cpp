//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();  // Number of people (rows)
        int m = mat[0].size();  // Number of people (columns)
        int index = -1;  // Index to store potential celebrity
        int cnt1 = 0;  // Counter for row condition (no knowing others)
        int cnt2 = 0;  // Counter for column condition (known by others)

        // Iterate through each person
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cnt1 += mat[i][j];  // Count how many people i knows
                cnt2 += mat[j][i];  // Count how many people know i
            }
            
            // Check if person i is a celebrity
            if (cnt1 == 0 && cnt2 == n - 1) {
                index = i;
            }
            
            // Reset counters for next person
            cnt1 = 0;
            cnt2 = 0;
        }
        
        // Return index of celebrity or -1 if no celebrity is found
        return index; // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends
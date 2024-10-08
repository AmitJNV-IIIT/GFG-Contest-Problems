//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int n,int start[], int end[])
    {
       vector<pair<int,int>> v;
        for(int i=0;i<n;i++) v.push_back({end[i],start[i]});
        sort(v.begin(),v.end());
        int ans=1,p=v[0].first;
        for(int i=1;i<n;i++) if(v[i].second>p)  ans++,p=v[i].first;
        return ans;  // Your code here
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends
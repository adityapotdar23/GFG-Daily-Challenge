//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int distinctSubsequences(string s)
    {
        int mod = 1000000007;
        unordered_map<char, int> Map;
        int n = s.length();
        
        int dp[n+1];
        dp[0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            dp[i] = (2*dp[i-1])%mod;
            char curr = s[i-1];
            if(Map.find(curr)!=Map.end())
            {
                dp[i] = (dp[i] - dp[Map[curr]-1] + mod)%mod;
            }
            Map[curr] = i;
        }
        return dp[n];
    }
    string betterString(string str1, string str2) {
        // code here
        int n_1 = distinctSubsequences(str1);
        int n_2 = distinctSubsequences(str2);
        if(n_1>=n_2)
        {
            return str1;
        }
        return str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends

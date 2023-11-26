//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        int n = N;
        vector<int> res;
        res.push_back(N);
        while(N>0)
        {
            N = N - 5;
            res.push_back(N);
        }
        
        while(N!=n)
        {
            N = N + 5;
            res.push_back(N);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends

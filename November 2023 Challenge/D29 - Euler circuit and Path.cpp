//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int> vis;
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	    vis = vector<int>(V+1, 0);
	    
	    dfs(0, adj);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==0 && adj[i].size()>0)
	        {
	            return 0;
	        }
	    }
	    
	    int cnt = 0;
	    for(int i=0;i<V;i++)
	    {
	        if((adj[i].size()%2)==1)
	        {
	            cnt++;
	        }
	    }
	    
	    if(cnt>2)
	    {
	        return 0;
	    }
	    else if(cnt==2)
	    {
	        return 1;
	    }
	    else
	    {
	        return 2;
	    }
	}
	
	void dfs(int u, vector<int> adj[])
	{
	    vis[u] = 1;
	    for(int v: adj[u])
	    {
	        if(vis[v]==0)
	        {
	            dfs(v, adj);
	        }
	    }
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends

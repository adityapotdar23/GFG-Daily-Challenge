//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // Your code here
        int n1 = str1.length(), n2 = str2.length();
        
        if(n1!=n2)
        {
            return false;
        }
        
        unordered_map<char, char> map;
        unordered_map<char, int> vis;
        
        for(int i=0;i<n1;i++)
        {
            char c1 = str1[i], c2 = str2[i];
            if(map.find(c1)==map.end())
            {
                if(vis.find(c2)==vis.end())
                {
                    map[c1] = c2;
                    vis[c2] = 1;
                }
                else if(vis[c2]=1)
                {
                    return false;
                }
            }
            else if(map[c1]!=c2)
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends

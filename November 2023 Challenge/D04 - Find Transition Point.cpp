//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int l = 0, r = n-1;
        if(arr[r]!=1)
        {
            return -1;
        }
        if(n==1)
        {
            if(arr[0]==1)
            {
                return 0;
            }
        }
        int ind;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(arr[mid]==0)
            {
                if(l==mid)
                {
                    break;
                }
                l = mid;
            }
            else if(arr[mid]==1) 
            {
                ind = mid;
                if(r==mid)
                {
                    break;
                }
                r = mid;
            }
        }
        return ind;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

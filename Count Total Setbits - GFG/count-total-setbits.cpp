//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long countBits(long long N) {
        // code here
         long long int res=0;
        int mx = log2(N);
        for(int i = 0; i<=mx; ++i){
            int r = pow(2,i);
            int t = N-(r-1);
            int p = t/(2*r);
            int q = t%(2*r);
            res+=(p*r);
            res+=min(q,r);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
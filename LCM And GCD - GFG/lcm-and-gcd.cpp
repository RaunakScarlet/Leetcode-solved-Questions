//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int solve(long long A , long long B){
         if(B==0){
             return A;
         }
         else
          return solve(B,A%B);
     }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        // if( A<B){
        //     swap(A,B);
        // }
        int gcd=solve(A,B);
        long long lcm=(A*B)/gcd;
        return {lcm,gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
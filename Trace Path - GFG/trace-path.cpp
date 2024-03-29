//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isPossible(int n, int m, string s){
        // code here
         int x=0,y=0, maxx=0,minx=0,maxy=0,miny=0;
        for(auto c: s){
            if(c=='L') x--;
            else if(c=='R') x++;
            else if(c=='U') y++;
            else if(c=='D') y--;
            
            maxx=max(maxx,x);
            maxy=max(maxy,y);
            minx=min(minx,x);
            miny=min(miny,y);
        }
        if( (maxx-minx)<m  && (maxy-miny)<n) return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
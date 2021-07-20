#include "bits/stdc++.h"
using namespace std;
#define int long long
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     int n,m,t;
     cin>>n>>m>>t;
     vector<vector<int>>pascal(31,vector<int>(31));
     for(int i=0;i<31;i++){
         for(int j=0;j<=i;j++){
             if(j==0 or j==i){
                 pascal[i][j] = 1;
             }
             else{
                 pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
             }
         }
     }
     int ans = 0;
     for(int i=4;i<=n;i++){
         int g = t-i;
         if(g<1 or g>m)
            continue;
        ans += (pascal[n][i]*pascal[m][g]);
     }
     cout<<ans;
    return 0;
}
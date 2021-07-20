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
     int n;
     cin>>n;
     vector<int> v(n+2,1);
     v[0] = 0;
     v[1] = 0;
     for(int i=2;i*i<n+2;i++){
         if(v[i]==1){
             for(int j=2;j*i<n+2;j++){
                 v[i*j] = v[i]+1;
             }
         }
     }
     int mx = 0;
     for(int i=2;i<n+2;i++){
         mx = max(v[i],mx);
     }
     cout<<mx<<endl;
     for(int i=2;i<n+2;i++){
         cout<<v[i]<<" ";
     }
    return 0;
}
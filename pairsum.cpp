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
     vector<int> arr(n+1,0);
     for(int i=1;i<=n;i++){
         cin>>arr[i];
     }
     vector<int> presum(n+1,0);
     vector<int> presqsum(n+1,0);
     for(int i=1;i<=n;i++){
         presum[i] = presum[i-1] + arr[i];
         presqsum[i] = presqsum[i-1] + (arr[i]*arr[i]);
     }
     int t;
     cin>>t;
     while(t--){
         int u,v;
         cin>>u>>v;
         u++;
         v++;
         int x = presqsum[v] - presqsum[u-1];
         int y = (presum[v]-presum[u-1]) * (presum[v]-presum[u-1]);
         y -= x;
         y = y/2;
         cout<<x+y<<endl;
     }
    return 0;
}
#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
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
   unordered_map<int,int> x;
   unordered_map<int,int> y;
   map<pair<int,int>,int> xy;
   int ans = 0;
   for(int i=0;i<n;i++){
       int xx,yy;
       cin>>xx>>yy;
       ans += x[xx] + y[yy] - xy[{xx,yy}];
       x[xx]++;
       y[yy]++;
       xy[make_pair(xx,yy)]++;
   }
   cout<<ans<<endl;
   return 0;
}
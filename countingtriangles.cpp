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
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
       int a,b;
       cin>>a>>b;
       x[a]++;
       y[b]++;
       v.push_back({a,b});
   }
   int ans = 0;
   for(auto i: v){
       ans +=  (x[i.first]-1)*(y[i.second]-1);
   }
    cout<<ans%10000<<endl;

   return 0;
}
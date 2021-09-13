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
   int n,m;
   cin>>n>>m;
   vector<int> cities(n);
   vector<int> towers(m);
   for(int i=0;i<n;i++){
      cin>>cities[i];
   }
   for(int i=0;i<m;i++){
      cin>>towers[i];
   }
   sort(begin(towers),end(towers));
   vector<int> ans;
   for(int i=0;i<n;i++){
      int next = upper_bound(begin(towers),end(towers),cities[i])-begin(towers);
      int prev = next - 1;
      int temp = min(abs(cities[i]-towers[next]),abs(cities[i]-towers[prev]));
      ans.push_back(temp);
   }
   cout<<*max_element(begin(ans),end(ans));
   return 0;
}
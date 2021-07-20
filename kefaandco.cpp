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
   int n,d;
   cin>>n>>d;
   vector<pair<int,int>> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i].first>>v[i].second;
   }
   sort(v.begin(),v.end());
   int sum = 0, start = 0, end = 0, maxi = 0;
   while(end<n){
      while(end<n and v[end].first-v[start].first<d){
         sum += v[end].second;
         end++;
      }
      maxi = max(maxi,sum);
      sum -= v[start].second;
      start++;
   }
   cout<<maxi<<endl;
   return 0;
}
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
   map<int,int> umap;
   umap[69] = 96;
   umap[34] = 36;
   umap[2] = 3;
   umap[78] = 87;
   umap[37] = 100;
   for(auto i: umap){
      cout<<i.first<<"->"<<i.second<<endl;
   }
   if(umap.find(2)!=umap.end())
      cout<<"Value found";
   return 0;
}
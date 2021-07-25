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
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       unordered_map<char,int> umap;
       for(auto i: s){
           umap[i]++;
       }
       int n = 0;
       for(auto i: umap){
           if(i.second==1)
                n += 1;
            else
                n+= 2;
       }
       cout<<n/2<<endl;
   }
   return 0;
}
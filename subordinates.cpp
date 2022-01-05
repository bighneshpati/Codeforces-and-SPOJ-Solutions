#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
vector<int> adj[200001];
int solve(int curr,int par,vector<int>&ans){
    int subOrd = 0;
    for(auto i: adj[curr]){
        if(i != par){
            subOrd += 1 + solve(i,curr,ans);
        }
    }
    return ans[curr] = subOrd;
}
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
   vector<int>ans(n+1);
   for(int i=2;i<n+1;i++){
       int x;
       cin>>x;
       adj[x].push_back(i);
       adj[i].push_back(x);
   }
   solve(1,0,ans);
   for(int i=1;i<=n;i++){
       cout<<ans[i]<<" ";
   }
   return 0;
}
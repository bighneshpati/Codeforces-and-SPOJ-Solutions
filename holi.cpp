#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int dfs(int node,vector<pair<int,int>> adj[],vector<bool> &visited,vector<int> &count,int &ans,int &n){
   visited[node] = true;
   count[node] = 1;
   for(auto nbr_pair : adj[node]){
      int nbr = nbr_pair.first;
      int cost = nbr_pair.second;
      if(!visited[nbr]){
         count[node] += dfs(nbr,adj,visited,count,ans,n);
         int nx = count[nbr];
         int ny = n-nx;
         ans += 2*min(nx,ny)*cost;
      }
   }
   return count[node];
}
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
   for(int p=1;p<=t;p++){
      int n;
      cin>>n;
      vector<pair<int,int>> adj[n+1];
      for(int i=1;i<=n-1;i++){
         int x,y,cost;
         cin>>x>>y>>cost;
         adj[x].push_back({y,cost});
         adj[y].push_back({x,cost});
      }
      vector<bool> visited(n+1,false);
      vector<int> count(n+1,0);
      int ans = 0;
      dfs(1,adj,visited,count,ans,n);
      cout<<"Case #"<<p<<" :"<<ans<<endl;
   }
   return 0;
}
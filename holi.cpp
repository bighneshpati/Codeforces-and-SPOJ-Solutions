#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e5 + 5;
#define int long long
int dfs(vector<pair<int,int>> adj[],int n,int &ans,int currNode,int parentNode){
   int totalCurrentNode = 1;
   for(auto u: adj[currNode]){
      int nextNode = u.first;
      int weight = u.second;
      if(nextNode==parentNode){
         continue;
      }
      int childNode = dfs(adj,n,ans,nextNode,currNode);
      ans += 2*min(childNode,n-childNode)*weight;
      totalCurrentNode += childNode;
   }
   return totalCurrentNode;
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
   for(int i=1;i<=t;i++){
      vector<pair<int,int>> adj[maxn];
      int ans = 0;
      int n;
      cin>>n;
      for(int j=0;j<n-1;j++){
         int u,v,w;
         cin>>u>>v>>w;
         adj[u].push_back({v,w});
         adj[v].push_back({u,w});
      }
      dfs(adj,n,ans,1,-1);
      cout<<"Case #"<<i<<": "<<ans<<endl;
   }
   return 0;
}
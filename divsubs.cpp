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
       int n;
       cin>>n;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       map<int,int> umap;
       vector<int> pre(n);
       pre[0] = arr[0]%n;
       umap[pre[0]] = 0;
       int start = 0;
       int end = 0;
       for(int i=1;i<n;i++){
           pre[i] = (pre[i-1] + arr[i])%n;
           if(pre[i]==0){
               start = 0;
               end = i;
               break;
           }
           else if(umap.find(pre[i])!=umap.end()){
               start = umap[pre[i]] + 1;
               end = i;
               break;
           }
           umap[pre[i]] = i;
       }
       cout<<end - start + 1<<endl;
       for(int i=start ;i<=end;i++){
           cout<<i+1<<" ";
       }
       cout<<endl;
   }
   return 0;
}
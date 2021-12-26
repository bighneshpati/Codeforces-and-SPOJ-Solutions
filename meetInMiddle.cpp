#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
void solve1(int idx,int sum,vector<int>&arr,int n,int x,unordered_map<int,int>&umap){
    if(idx==n){
        umap[sum]++;
        return;
    }
    solve1(idx+1,sum+arr[idx],arr,n,x,umap);
    solve1(idx+1,sum,arr,n,x,umap);
}
void solve2(int idx,int sum,vector<int>&arr,int n,int x,unordered_map<int,int>&umap,int&count){
    if(idx==n){
        if(umap.find(x-sum)!=umap.end()){
            count += umap[x-sum];
        }
        return;
    }
    solve2(idx+1,sum+arr[idx],arr,n,x,umap,count);
    solve2(idx+1,sum,arr,n,x,umap,count);
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n,x;
   cin>>n>>x;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int mid = n/2;
   unordered_map<int,int> umap;
   solve1(0,0,arr,mid+1,x,umap);
    int count = 0;
    solve2(mid+1,0,arr,n,x,umap,count);
    cout<<count<<endl;
   return 0;
}
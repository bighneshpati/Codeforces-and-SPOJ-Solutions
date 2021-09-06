#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int ans = LLONG_MAX;
void solve(int &s1,int &s2,int idx,vector<int>& arr){
    if(idx==arr.size()){
        ans = min(ans,abs(s1-s2));
        return;
    }
    s1 += arr[idx];
    solve(s1,s2,idx+1,arr);
    s1 -= arr[idx];
    s2 += arr[idx];
    solve(s1,s2,idx+1,arr);
    s2 -= arr[idx];
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
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int a = 0;
   int b = 0;
    solve(a,b,0,arr);
    cout<<ans<<endl;
   return 0;
}
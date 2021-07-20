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
   int n,q;
   cin>>n>>q;
   vector<int> arr(200500);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    vector<int> cnt(200500,0);   
   while(q--){
       int l,r;
       cin>>l>>r;
       cnt[l-1]++;
       cnt[r]--;
   }
   for(int i=1;i<n;i++){
       cnt[i] += cnt[i-1];
   }
   vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(cnt[i]);
    }
    sort(v.begin(),v.end());
    sort(arr.begin(),arr.begin()+n);
    int res = 0;
    for(int i=0;i<n;i++){
        res += arr[i]*v[i];
    }
    cout<<res;
   return 0;
}
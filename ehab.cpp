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
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   bool even = false;
   bool odd = false;
   for(int i=0;i<n;i++){
       if(arr[i]%2==0){
           even = true;
       }
       else{
           odd = true;
       }
   }
   if(even and odd){
       sort(arr.begin(),arr.end());
   }
   for(auto i: arr){
       cout<<i<<" ";
   }
   return 0;
}
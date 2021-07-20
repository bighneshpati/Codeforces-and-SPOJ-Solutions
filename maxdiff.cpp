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
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       vector<int> arr(n);
       int sum = 0;
       for(int i=0;i<n;i++){
           cin>>arr[i];
           sum += arr[i];
       }
       sort(arr.begin(),arr.end());
       int sum1 = 0;
       int sum2 = 0;
       for(int i=0;i<k;i++){
           sum1 += arr[i];
       }
       for(int i=n-1;i>n-k-1;i--){
           sum2 += arr[i];
       }
       cout<<max(abs(sum1-(sum-sum1)),abs(sum2-(sum-sum2)))<<endl;
   }
   return 0;
}
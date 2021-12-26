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
   int n;
   cin>>n;
   int sum = 0;
   int count = 0;
   int maxx = INT_MIN;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
       if(arr[i]>=0){
            sum += arr[i];
            count++;
       }
       maxx = max(maxx,arr[i]);
   }
   if(count){
       cout<<sum<<" "<<count<<endl;
   }
   else{
       cout<<maxx<<" "<<"1"<<endl;
   }
   return 0;
}
#include "bits/stdc++.h"
using namespace std;
#define int long long
int price(int mid,int n,vector<int> &a){
   vector<int> b(n);
   for(int i=1;i<=n;i++){
      b[i-1] = a[i] + (i*mid);
   }
   sort(b.begin(),b.end());
   int p = 0;
   for(int i=0;i<mid;i++){
      p += b[i];
   }
   return p;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n,S;
   cin>>n>>S;
   vector<int>a(1000000);
   for(int i=1;i<=n;i++){
      cin>>a[i];
   }
   int low = 0;
   int high = n;
   int ans = 0;
   int cost = 0;
   while(low<=high){
      int mid = low + (high-low)/2;
      int k = price(mid,n,a);
      if(k==S){
         cout<<mid<<" "<<S;
         return 0;
      }
      else if(k>S)
         high = mid - 1;
      else{
         low = mid + 1;
         ans = mid;
         cost = k;
      }
   }
   cout<<ans<<" "<<cost<<endl;
   return 0;
}
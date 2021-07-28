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
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int cnt = 0;
   for(int i=1;i<n;i++){
       int j = i;
       while(j>0 and arr[j]<arr[j-1]){
           swap(arr[j],arr[j-1]);
           j--;
           cnt++;
       }
       cnt++;
   }
   cout<<"After sorting"<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<cnt<<endl;
   return 0;
}
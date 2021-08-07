#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool greedy(vector<int> &arr,int mid,int t){
   int cnt = 0;
   for(auto i: arr){
      cnt += mid/i;
   }
   return cnt>=t;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n,t;
   cin>>n>>t;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int low = 1;
   int high = *min_element(arr.begin(),arr.end())*t;
   int mid;
   while(low<=high){
      mid = low + (high-low)/2;
      bool r = greedy(arr,mid,t);
      if(!r)
         low = mid + 1;
      else{
         bool r1 = greedy(arr,mid-1,t);
         if(!r1){
            cout<<mid<<endl;
            break;
         }
         else
            high = mid - 1;
      }
   }
   return 0;
}
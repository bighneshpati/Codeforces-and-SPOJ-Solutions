#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int search1(int low,int high,vector<int>&arr,int target){
    int i = low - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] + arr[i]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int search2(int low,int high,vector<int>&arr,int target){
    int i = low - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] + arr[i] <= target){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
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
       int n,l,r;
       cin>>n>>l>>r;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int count = 0;
       sort(arr.begin(),arr.end());
       for(int i=0;i<n-1;i++){
           int idx1 = search1(i+1,n-1,arr,l);
           int idx2 = search2(i+1,n-1,arr,r);
           if(idx1==-1 or idx2==-1){
               continue;
           }
           count += (idx2 - idx1 + 1);
       }
       cout<<count<<endl;
   }
   return 0;
}
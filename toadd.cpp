#include "bits/stdc++.h"
using namespace std;
#define int long long
bool solve(int mid,int& ans2,vector<int>& arr,vector<int>& p,int k,int n){
    for(int i=1;i<=n;i++){
        if(i-mid>=0 and mid*arr[i]-(p[i]-p[i-mid])<=k){
            ans2 = arr[i];
            return true;
        }
    }
    return false;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n,k;
   cin>>n>>k;
   vector<int> arr(n+1);
   for(int i=1;i<=n;i++){
       cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
    vector<int> p(n+1,0);
    for(int i=1;i<=n;i++){
        p[i] = p[i-1] + arr[i];
    }
    int low = 1;
    int high = n;
    int ans1 = 0;
    int ans2 = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if (!solve(mid,ans2,arr,p,k,n)){
            high = mid - 1;
        }
        else {
            int r = ans2;
            if(!solve(mid+1,ans2,arr,p,k,n)){
                cout<<mid<<" "<<r<<endl;
            } 
            low = mid + 1;
        }
    }
   return 0;
}
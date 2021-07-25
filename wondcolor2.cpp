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
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       vector<int> arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       vector<int> pt(maxn,1);
       for(auto i: arr){
           if(pt[i]>k){
               cout<<"0 ";
           }
            else{
                cout<<pt[i]<<" ";
                pt[i]++;
            }
       }
       cout<<endl;
   }
   return 0;
}
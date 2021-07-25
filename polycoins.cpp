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
       int mini = 1e9+5;
       int n;
       cin>>n;
       int first;
       int second;
       for(int i=1;i<n/2;i++){
           for(int j=i;j<n/2;j++){
               if(j+(2*i)==n){
                   if(j-i<mini){
                       mini = j-i;
                        first = j;
                        second = i;
                   }
               }
           }
       }
       cout<<first<<" "<<second<<endl;
   }
   return 0;
}
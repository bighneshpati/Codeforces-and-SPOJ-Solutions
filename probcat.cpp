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
       int n;
       cin>>n;
       if(n>=1 and n<100){
           cout<<"Easy"<<endl;
       }
       else if(n>=100 and n<200){
           cout<<"Medium"<<endl;
       }
       else{
           cout<<"Hard"<<endl;
       }
   }
   return 0;
}
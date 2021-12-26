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
       int a,b;
       cin>>a>>b;
       if(a>0 and b>0){
           cout<<"Solution"<<endl;
       }
       else if(a==0){
           cout<<"Liquid"<<endl;
       }
       else{
           cout<<"Solid"<<endl;
       }
   }
   return 0;
}
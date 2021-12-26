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
       int a,b,p,q;
       cin>>a>>b>>p>>q;
       if(p%a!=0){
           cout<<"NO"<<endl;
           continue;
       }
       if(q%b!=0){
           cout<<"NO"<<endl;
           continue;
       }
       int temp1 = p/a;
       int temp2 = q/b;
       if(abs(temp1-temp2)<=1){
           cout<<"YES"<<endl;
           continue;
       }
        cout<<"NO"<<endl;
   }
   return 0;
}
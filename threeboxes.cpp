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
       int ans = 0;
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       if(a+b+c<=d){
           cout<<"1"<<endl;
       }
       else if(a+c<=d){
           cout<<"2"<<endl;
       }
       else if(a+b<=d){
           cout<<"2"<<endl;
       }
       else{
           cout<<"3"<<endl;
       }
   }
   return 0;
}
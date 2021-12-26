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
       cout<<"1"<<" ";
       int c = 1;
       while(n--){
           cout<<c<<" ";
           c*=2;
       }
       cout<<endl;
   }
   return 0;
}
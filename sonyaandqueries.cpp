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
   int s[maxn];
   int t;
   cin>>t;
   while(t--){
       char ch;
       int x;
       cin>>ch>>x;
       int c = 1,nt = 0;
       while(x){
           nt += ((x%10)&1)*c;
           c<<=1;
           x/=10;
       }
       if(ch=='+') s[nt]++;
       else if(ch=='-') s[nt]--;
       else{
           cout<<s[nt]<<endl;
       }
   }
   return 0;
}
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
       string val;
       cin>>val;
       int ab = 0;
       int ba = 0;
       for(int i=0;i<val.length()-1;i++){
           if(val[i]=='a' and val[i+1]=='b'){
               ab++;
           }
           else if(val[i]=='b' and val[i+1]=='b'){
               ba++;
           }
       }
       int i = 0;
       while(ab!=ba){
           
       }
   }
   return 0;
}
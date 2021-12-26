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
       string s;
       cin>>s;
       int n = s.length();
       int count = 0;
       for(int i=0;i<n;i++){
           if(s[i]=='1'){
               count++;
               while(s[i]=='1'){
                   i++;
               }
           }
       }
       if(count==1){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
   }
   return 0;
}
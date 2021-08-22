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
   for(int j=1;j<=t;j++){
       string s;
       cin>>s;
       string temp = s;
       int flag=0;
       while(next_permutation(s.begin(),s.end())){
           flag = 0;
           for(int i=0;i<s.length();i++){
               if(s[i]==temp[i])
                    break;
                if(i==s.length()-1 and s[i]!=temp[i]){
                    flag = 1;
                }
           }
           if(flag==1){
               cout<<"Case #"<<j<<": "<<s<<endl;
               break;
           }
       }
       if(flag==0){
           cout<<"Case #"<<j<<": "<<"IMPOSSIBLE"<<endl;
       }
   }
   return 0;
}
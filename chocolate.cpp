#include "bits/stdc++.h"
using namespace std;
#define int long long
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     int n;
     cin>>n;
     int prev = -1;
     int res = 0;
     for(int i=0;i<n;i++){
         int p;
         cin>>p;
         if(p==1){
             if(prev==-1){
                 res=1;
             }
             else{
                 res *= i-prev;
             }
             prev = i; // 01010
         }
     }
     cout<<res<<endl;
    return 0;
}
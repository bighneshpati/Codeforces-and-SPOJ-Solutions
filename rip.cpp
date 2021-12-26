#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool solve(int n){
    if(n>0 and n<10)
        return false;
    else{
        while(n){
            int temp = n%100;
            if(temp==21)
                return true;
            n /= 10;
        }
    }
    return false;
}
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
       if(n%21==0){
           cout<<"The streak is broken!"<<endl;
       }
       else if(solve(n)){
           cout<<"The streak is broken!"<<endl;
       }
       else{
           cout<<"The streak lives still in our heart!"<<endl;
       }
   }
   return 0;
}
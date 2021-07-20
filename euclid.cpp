#include "bits/stdc++.h"
using namespace std;
#define int long long
void gcd(int a,int b){
    if(a==0){
        cout<<"the gcd is "<<b;
        return;
    }
    gcd(b%a,a);
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int a,b;
   cin>>a>>b;
   gcd(a,b);
   return 0;
}
#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int mod = 1e9 + 7;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a,int b){
    return a/gcd(a,b) * b;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n, k;
   cin>>n>>k;
   vector<int> arr(n);
   int l = 1; 
   for(int i=0;i<n;i++){
       cin>> arr[i];
       int _gcd = gcd(arr[i],k);
       l = lcm(l,_gcd);
   }
   if(l==k){
       cout<<"Yes"<<endl;
   }
   else{
       cout<<"No"<<endl;
   }
   return 0;
}
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
   int n;
   cin>>n;
   vector<int> list;
   while(n!=1){
       list.push_back(n);
       if(n%2==0){
           n /= 2;
       }
       else{
           n *= 3;
           n += 1;
       }
   }
   list.push_back(1);
   for(auto i: list){
       cout<<i<<" ";
   }
   return 0;
}
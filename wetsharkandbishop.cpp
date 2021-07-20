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
     unordered_map<int,int> m1,m2;
     for(int i=0;i<n;i++){
         int x,y;
         cin>>x>>y;
         m1[x+y]++;
         m2[x-y]++;
     }
     int ans = 0;
     for(auto i: m1){
        int f = i.second;
        ans += (f*(f-1))/2;
     }
     for(auto i: m2){
        int f = i.second;
        ans += (f*(f-1))/2;
     }
     cout<<ans<<endl;
    return 0;
}
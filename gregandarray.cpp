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
   int n,m,k;
   cin>>n>>m>>k;
   vector<int> l(maxn);
   vector<int> r(maxn);
   vector<int> d(maxn);
   vector<int> arr(maxn);
   vector<int> s(maxn);
   vector<int> f(maxn);
   for(int i=1;i<=n;i++){
       cin>>arr[i];
   }
    for(int i=1;i<=m;i++){
        cin>>l[i]>>r[i]>>d[i];
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        f[x]++;
        f[y+1]--;
    }
    int sum = 0;
    for(int i=1;i<=m;i++){
        sum += f[i];
        s[l[i]] += d[i]*sum;
        s[r[i]+1] -= d[i]*sum;
    }
    sum = 0;
    for(int i=1;i<=n;i++){
        sum += s[i];
        cout<<arr[i] + sum<<" ";
    }
   return 0;
}
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
     int m;
     cin>>n>>m;
     vector<int> arr(n);
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     int r = 0;
     for(int i=0;i<n;i++){
         r += arr[i];
         cout<<r/m<<" ";
         r %= m;
     }
    return 0;
}
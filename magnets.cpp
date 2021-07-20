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
     vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(v[i-1]!=v[i])
            cnt++;
    }
    cout<<cnt;
    return 0;
}
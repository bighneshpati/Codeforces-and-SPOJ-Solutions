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
    vector<int> spm(3001,0);
    for(int i=2;i<3001;i++){
        if(spm[i]==0){
            for(int j=i*2;j<3001;j+=i){
                spm[j]++;
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(spm[i]==2)
            ans++;
    }
    cout<<ans;
}
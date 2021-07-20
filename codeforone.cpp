#include "bits/stdc++.h"
using namespace std;
#define int long long
int n,l,r;
int solve(int n, int left, int right){
    if(left>r or right<l) return 0;

    if(n<2){
        if(left>=l and right<=r) return n;
        else return 0;
    }
    int mid = (left+right)>>1;
    return solve(n/2,left,mid-1) + solve(n%2,mid,mid) + solve(n/2,mid+1,right);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     cin>>n>>l>>r;
     int len = 1;
     while(len<n){
         len = 2*len + 1;
     }
     cout<<solve(n,1,len)<<endl;
    return 0;
}
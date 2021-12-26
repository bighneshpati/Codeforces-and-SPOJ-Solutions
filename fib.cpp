#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
//normal fibbonaci Series
int fib(int n){
    if(n==1 or n==0){
        return n;
    }
    return fib(n-1)+fib(n-2);
}// time complexity -> 2^n
// fibonacci series in top to bottom approach
int fibTB(int n,vector<int>&dp){
    if(n==0 or n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return fibTB(n-1,dp) + fibTB(n-2,dp);
}// time complexity -> O(n);
// fibonacci series in bottom up approach
int fibBU(int n){
    // vector<int> dp(maxn,-1);
    int f = 0;
    int s = 1;
    for(int i=2;i<50;i++){
        int cur = f + s;
        s = cur;
        f = s;
    }
    return s;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int val;
   cin>>val;
   //normal fibbonaci series
   int n = fib(val);
    //cout<<n<<endl;
   //top down approach
    // vector<int> dp(maxn,-1);
    // dp[0] = 0;
    // dp[1] = 1;
    // int ans = fibTB(val,dp);
    // cout<<ans<<endl;
   //bottom up approach
    int ans = fibBU(val);
    cout<<ans<<endl;
   return 0;
}
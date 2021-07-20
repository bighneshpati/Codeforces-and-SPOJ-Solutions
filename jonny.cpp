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
     int t;
     cin>>t;
     while(t--){
         int a,b;
         cin>>a>>b;
         if(a>b)
            swap(a,b);
        int n;
        if(b%a!=0){
            cout<<"-1"<<endl;
            continue;
        }
        n = b/a;
        int cnt = 0;
        while(n%8==0){
            n /= 8;
            cnt++;
        }
        while(n%4==0){
            n /= 4;
            cnt++;
        }
        while(n%2==0){
            n /= 2;
            cnt++;
        }
        if(n==1)
            cout<<cnt<<endl;
        else   
            cout<<"-1"<<endl;
     }
     
    return 0;
}
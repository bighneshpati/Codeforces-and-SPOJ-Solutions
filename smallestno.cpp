#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(vector<int>v,vector<char>signs,int h,int &small){
    if(h==3){
        small = min(small,v[0]);
        return;
    }
    vector<int>c(4);
    for(int i=0;i<4-h;i++){
        for(int j=i+1;j<4-h;j++){
            for(int k=0;k<4;k++){
                c[k] = v[k];
            }
            if(signs[h] == '*')
                c[i] = c[i]*c[j];
            if(signs[h] == '+')
                c[i] = c[i]+c[j];
            for(int k=j;k<3;k++){
                c[k] = v[k+1];
            }
            solve(c,signs,h+1,small);
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
     vector<int>v(4);
     vector<char> signs(3);
     for(int i=0;i<4;i++){
         cin>>v[i];
     }
     for(int i=0;i<3;i++){
         cin>>signs[i];
     }
     int small = LLONG_MAX;
     solve(v,signs,0,small);
     cout<<small<<endl;
    return 0;
}
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
   string s;
   cin>>s;
   stack<char> st;
   for(auto i: s){
       if(!st.empty() and st.top()==i){
            st.pop();
       }
       else
            st.push(i);
   }
   if(st.empty())
        cout<<"Yes";
    else
        cout<<"No";
   return 0;
}
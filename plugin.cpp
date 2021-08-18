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
   vector<char> ans;
   for(int i=0;i<s.length();i++){
       if(ans.size()>0 and ans.back()==s[i])
            ans.pop_back();
        else
            ans.push_back(s[i]);
   }
   for(int i=0;i<ans.size();i++)
        cout<<ans[i];
    cout<<endl;
   return 0;
}
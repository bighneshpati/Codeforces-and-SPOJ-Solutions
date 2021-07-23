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
   queue<int> q;
   int n,k;
   cin>>n>>k;
   for(int i=0;i<k;i++){
       int temp;
       cin>>temp;
       q.push(temp);
   }
    int first = q.front();
    q.pop();
    int cnt = 0;
    while(cnt!=k){
        if(first>q.front()){
            cnt++;
            int sec = q.front();
            q.pop();
            q.push(sec);
        }
        else{
            cnt = 0;
            q.push(first);
            first = q.front();
            q.pop();
        }
    }
    cout<<first<<endl;
   return 0;
}
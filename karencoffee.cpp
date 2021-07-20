#include "bits/stdc++.h"
using namespace std;
#define int long long
void voteall(int l,int r,vector<int> &votes){
    votes[r]++;
    if(l>0)
        votes[l-1]--;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n,k,q;
   cin>>n>>k>>q;
   vector<int> votes(200001,0);
   while(n--){
       int l,r;
       cin>>l>>r;
       voteall(l,r,votes);
   }
   for(int i=199999;i>=1;i--){
       votes[i] += votes[i+1];
   }
    while(q--){
        int a,b;
        cin>>a>>b;
        int count = 0;
        for(int i=a;i<=b;i++){
            if(votes[i]>=k)
                count++;
        }
        cout<<count<<endl;
    }
   return 0;
}
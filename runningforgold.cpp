#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool cmp(pair<int,int> &p1,pair<int,int> &p2){
    return p1.first>p2.first;
}
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
       int n;
       cin>>n;
       vector<vector<int>> arr(n+1,vector<int>(6));
       for(int i=1;i<=n;i++){
           for(int j=1;j<=5;j++){
               cin>>arr[i][j];
           }
       }
       vector<int> ath(n,0);
       for(int j=1;j<=5;j++){
           int win ;
           int minm = 1e6;
           for(int i=1;i<=n;i++){
               if(arr[i][j]<minm){
                   win = i;
                    minm = arr[i][j];
               }
           }
           ath[win-1]++;
       }
        vector<pair<int,int>> vec;
        
        for(int i=0;i<ath.size();i++){
            vec.push_back(make_pair(ath[i],i+1));
        }
        sort(vec.begin(),vec.end(),cmp);
        // for(int i=0;i<ath.size();i++){
        //     cout<<vec[i].first<<" ";
        // }
        // cout<<endl;
        if(n==1)
            cout<<"1"<<endl;
        else if(vec[0].first==vec[1].first)
            cout<<"-1"<<endl;
        else{
            cout<<vec[0].second<<endl;
        }
   }
   return 0;
}
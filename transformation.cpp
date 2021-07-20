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
     int a,b;
     cin>>a>>b;
     vector<int> vec;
     vec.push_back(b);
     while(b>0){
         if(b%2==0){
             b/=2;
            vec.push_back(b);
         }
         else if((b-1)%10==0){
             b -= 1;
             b = b/10;
             vec.push_back(b);
         }
         else
            break;
         if(b==a)
            break;
     }
     if(vec[vec.size()-1]!=a){
         cout<<"NO"<<endl;
     }
     else{
         cout<<"YES"<<endl;
         cout<<vec.size()<<endl;
         for(int i=vec.size()-1;i>=0;i--){
             cout<<vec[i]<<" ";
         }
     }
    return 0;
}


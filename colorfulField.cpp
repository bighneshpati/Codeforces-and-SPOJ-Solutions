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
     int n,m,k,t;
     cin>>n>>m>>k>>t;
     vector<int> vec;
     while(k--){
         int x,y;
         cin>>x>>y;
         x--;
         vec.push_back(x*m+y);
     }
     sort(vec.begin(),vec.end());
     while(t--){
         int x,y;
         cin>>x>>y;
         x--;
        int pos = x * m + y;

        int k = 0, j = 0;
        for(int e : vec)
        {
            if(e < pos)
                k++;
            else if(e == pos)
                j = 1;
            else
                break;
        }

        pos -= k;
        pos = pos % 3;
         if(j==1)
            cout<<"Waste"<<endl;
         else if(pos==1)
            cout<<"Carrots"<<endl;
         else if(pos==2)
            cout<<"Kiwis"<<endl;
         else
            cout<<"Grapes"<<endl;
     }
    return 0;
}

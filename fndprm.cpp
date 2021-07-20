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
     vector<int> primes(1e6+1,1);
     primes[1] = primes[0] = 0;
     for(int i=2;i*i<1e6+1;i++){
         if(primes[i]==1){
             for(int j=i;j*i<1e6+1;j++){
                 primes[i*j] = 0;
             }
         }
     }
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int cnt = 0;
         int startIndex = n/2 + 1;
         if(n<4)
            cout<<n-1<<endl;
        else{
            for(int i=startIndex;i<=n;i++){
				if(primes[i]==1)
					cnt++;
						}
            cout<<cnt<<endl;
        }
     }
     
     
    return 0;
}
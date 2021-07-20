#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
    cin >> T;
    while (T--) {
        ll n;
		cin>>n;
        vector<ll> prime(n+1,1);
        prime[1]=0;
        for(ll i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(ll j=i;j*i<=n;j++){
                    prime[j*i] = 0;
                }
            }
        }
        ll count = 0;
        for(ll i=2;i<=n;i++){
            if(prime[i]==1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
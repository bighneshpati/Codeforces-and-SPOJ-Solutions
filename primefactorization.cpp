#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long int;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    cin >> T;
    vector<int>spf(INF,-1);
    while (T--) {
        int n;
        cin>>n;
        vector<int> prime(n+1,1);
        prime[0] = 0;
        prime[1] = 0;
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i;j*i<=n;j++){
                    spf[j*i] = i;
                    prime[j*i] = 0;
                }
            }
        }
        int curr = spf[n];
        int cnt = 1;
        while(spf[n]!=-1){
             n /= spf[n];
            if (curr == spf[n]) {
                cnt++;
                continue;
            }
            if(n != 1 && n == curr) {
                cnt++;
                continue;
            }
            cout<<curr<<" "<<cnt<<endl;
            curr = spf[n];
            cnt = 1;
        }
        while(n!=1){
            cout<<curr<<" "<<cnt<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 long long  solve(vector<long long > &v, long long  p, long long  q, long long r, long long n){

vector<long long > smax(n);
vector<long long> pmax(n);
long long ans=LLONG_MIN;

pmax[0] = p*v[0];
for(int i=1;i<n;i++){
    pmax[i] = max(pmax[i-1],p*v[i]);
}

smax[n-1]=r*v[n-1];


//cout<<pmax<<endl;

for(int i=n-2;i>=0;i--){

smax[i] = max(v[i]*r,smax[i+1]);

}

//print(smax);

for(int i=0;i<n;i++){

ans=max(ans,(pmax[i]+q*v[i]+smax[i]));

}

return ans;

}
int32_t main()
{
    c_p_c();
    int n,p,q,r;
    cin>>n>>p>>q>>r;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = solve(v,p,q,r,n);
    cout<<ans<<endl;
    return 0;
}
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
// int gcd(int a,int b){
//     int maxm = max(a,b);
//     int minm = min(a,b);
//     if(minm==0) return maxm;
//     while(maxm%minm!=0){
//         int temp = maxm;
//         maxm = minm;
//         minm = temp%minm;
//     }
//     return minm;
// }
//  int lcm(int a,int b){
//      int z = gcd(a,b);
//      return (a*b)/z;
//  }
int32_t main()
{
    c_p_c();
    // int t;
    // while(t--){
    //     int n,a,b,k;
    //     cin>>n>>a>>b>>k;
    //     int out = ((n/a)+(n/b))-(n/lcm(a,b));
    //     if(out>=k)
    //         cout<<"Win";
    //     else
    //         cout<<"Lose";
    //}
    int t; cin >> t;



while (t--) {

long long n, a, b, k, x, y, z;

cin >> n >> a >> b >> k;

x = n / a;

y = n / b;



long long maximum = max(a, b);

long long minimum = min(a, b);



if (minimum != 0) {



while (maximum % minimum != 0) {



long long temp = maximum;

maximum = minimum;

minimum = temp % minimum;

}



} else {

minimum = maximum;

}





long long gcd = minimum;

long long lcm = (a * b) / gcd;



z = n / lcm;



cout << (x + y - 2 * z >= k ? "Win\n" : "Lose\n");
}
    return 0;
}
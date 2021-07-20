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
 int gcd(int x, int y)

{

    int minm=min(x,y);

    int maxm=max(x, y);

    if(minm==0)

    {

        return maxm;

    }

    else while(maxm%minm!=0)

    {

        int temp=maxm;

        maxm=minm;

        minm=temp%minm;

    }

    return minm;

    

}

//function to get lcm

int lcm(int a[], int n)

{

    int l=a[0]*a[1]/gcd(a[0],a[1]);



     l=l*a[2]/gcd(l,a[2]);   

    return l;

}


int32_t main()
{
    c_p_c();
    int n;
    cin>>n;
    int a[]={n,n-1,n-2};

    int z = sizeof(a)/sizeof(a[0]);

    int lc=lcm(a,z);

    cout<<lc;

 return 0;
    return 0;
}
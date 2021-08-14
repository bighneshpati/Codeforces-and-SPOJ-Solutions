#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
vector<int> intime;
vector<int> outtime;
void resize(int n){
    intime.resize(n+1);
    outtime.resize(n+1);
}
int timer;
bool check(int x,int y){
    if(intime[x]>intime[y] and outtime[x]<outtime[y])
        return true;
    return false;
}
void dfs(int src,int par,vector<int> adj[]){
    intime[src] = timer++;
    for(auto x: adj[src]){
        if(x!=par){
            dfs(x,src,adj);
        }
    }
    outtime[src] = timer++;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    int n ;
    cin>>n;
    timer = 0;
    resize(n);
    vector<int> adj[n+1];
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,0,adj);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int type,x,y;
        cin>>type>>x>>y;
        if(!check(x,y) and !check(y,x)){
            cout<<"NO"<<endl;
            continue;
        }
        if(type==0){
            if(check(y,x))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else if(type==1){
            if(check(x,y))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
   return 0;
}
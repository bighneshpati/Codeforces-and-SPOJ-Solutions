#include<bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007
#define INF ((1LL<<62LL) - 1)
 
bool comp(vector<int>& a, vector<int>& b){
    int cnt = 0;
    for(int i=0;i<5;i++){
        if(a[i] < b[i]){
            cnt++;
        }
    }
 
    return cnt >= 3;
}
 
void calc(){
    int n; cin >> n;
    vector<int> a[n];
    vector<int> b[n];
 
    set<int> s;
 
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++) {
            int x;
            cin >> x;
            a[i].push_back(x);
            b[i].push_back(x);
        }
        a[i].push_back(i);
    }
 
    sort(a, a+n, comp);
 
    for(int i=1;i<n;i++){
        if(!comp(a[0], a[i])){
            cout << "-1\n";
            return;
        }
    }
 
    cout << a[0].back()+1 << "\n";
 
//    for(int j=0;j<5;j++) {
//        vector<pair<int,int> > vp;
//        for (int i = 0; i < n; i++) {
//            vp.push_back({a[i][j], i});
//        }
//
//        sort(vp.begin(), vp.end());
//        for(int i=0;i<min(10LL, (int)vp.size());i++){
//            s.insert(vp[i].second);
//        }
//    }
 
//    for(int x : s){
//        bool ok = true;
//        for(int i=0;i<n;i++){
//            if(i == x){
//                continue;
//            }
//            if(!comp(a[x], a[i])){
//                ok = false;
//                break;
//            }
//        }
//        if(ok){
//            cout << x+1 << "\n";
//            return;
//        }
//    }
//
//    cout << "-1\n";
 
 
 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        calc();
    }
 
 
 
    
 
}
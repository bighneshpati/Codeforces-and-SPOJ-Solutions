// #include "bits/stdc++.h"
// using namespace std;
// #define int long long
// bool cmp(pair<int,int>p1 ,pair<int,int> p2){
//     if(p1.first!=p2.first)
//         return p1.first>p2.first;
//     return p1.second<p2.second;
// }
// int32_t main()
// {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    #endif
//    int n,a,b;
//    cin>>n>>a>>b;
//    vector<pair<int,int>> arr(1e6+1);
//    vector<int> res(1e6+1);
//    for(int i=1;i<=n;i++){
//        cin>>arr[i].first;
//        arr[i].second = i;
//    }
//    if(a>b){
//        sort(arr.begin(),arr.end());
//    }
//    else if(a<b){
//        sort(arr.begin(),arr.end(),cmp);
//    }
//    else{
//        for(int i=1;i<=a;i++){
//            cout<<"1"<<" ";
//        }
//        for(int i=1;i<=b;i++){
//            cout<<"2"<<" ";
//        }
//        return 0;
//    }
//     for(int i=1;i<=a;i++){
//         res[arr[i].second] = 1;
//     }
//     for(int i=a+1;i<=n;i++){
//         res[arr[i].second] = 2;
//     }
//     for(int i=1;i<=n;i++){
//         cout<<res[i]<<" ";
//     }
//    return 0;
// }
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#define PB push_back
#define ST first
#define ND second
#define MP make_pair
 
using namespace std;
 
typedef long long int lld;
typedef pair<int,int> pi;
const int MAXN = 100010;
 
bool op(pi a, pi b) {
    if (a.ST != b.ST)
        return a.ST>b.ST;
    return a.ND < b.ND;
}
 
int x, y, n, res[MAXN];
pi t[MAXN];
 
int main () {
    ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    cin >> n >> x >> y;
    for (int i=1; i<=n; i++) {
        cin >> t[i].ST;
        t[i].ND = i;
    }
    if (y > x) {
        sort(t+1, t+1+n, op);
    }
    else if (x>y){
        sort(t+1, t+1+n);
    }
    else {
        for (int i=1; i<=x; i++)
        cout << "1 ";
        for (int i=1; i<=y; i++)
        cout << "2 ";
        return 0;
    }
    for (int i=1; i<=x; i++)
        res[t[i].ND] = 1;
    for (int i=x+1; i<=n; i++)
        res[t[i].ND] = 2;
    for (int i=1; i<=n; i++)
        cout << res[i] << " ";
    cout << endl;
//   system("pause");
}
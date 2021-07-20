
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
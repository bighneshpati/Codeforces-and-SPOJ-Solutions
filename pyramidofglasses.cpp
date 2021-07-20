#include<bits/stdc++.h>
using namespace std;
int n;
void fillglasses(vector<vector<double>>& v, int i, int j, double qty){
        if(i > n)
            return;
        v[i][j] += qty;
        if(v[i][j] > 1){
            fillglasses(v, i+1, j, (v[i][j]-1)/2);
            fillglasses(v, i+1, j+1, (v[i][j]-1)/2);
            v[i][j] = 1;
        }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
    int t, cnt = 0;
    cin >> n >> t;
    vector<vector<double>> v(n+1, vector<double>(n+1, 0));
    fillglasses(v, 1, 1, t);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
             if(v[i][j] == 1) cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
 
const int DIM = 2010;
 
pair<int, int> pts[DIM];
 
inline bool ccw( pair<int, int> &p1, pair<int, int> &p2, pair<int, int> &p3 ) {
    return ( p2.first - p1.first ) * ( p3.second - p1.second ) -
           ( p3.first - p1.first ) * ( p2.second - p1.second ) != 0;
}
 
int main( void ) {
    ios::sync_with_stdio( false );
    cin.tie(); cout.tie();
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    int n;
    cin >> n;
    
    for( int i = 1; i <= n; i ++ )
        cin >> pts[i].first >> pts[i].second;
    
    int ans = 0;
    for( int i = 1; i <= n; i ++ )
        for( int j = i + 1; j <= n; j ++ )
            for( int k = j + 1; k <= n; k ++ )
                if( ccw( pts[i], pts[j], pts[k] ) == true )
                    ans ++;
    
    cout << ans << endl;
    return 0;
}
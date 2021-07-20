// #include "bits/stdc++.h"
// using namespace std;
// int gcd(int a, int b){
//     if (b == 0)
//         return a;
//     return gcd(b, a % b); 
// }
// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif
//     vector<int> countdiv(1000001,2);
//     countdiv[1] = 1;
//     countdiv[0] = 0;
//     for(int i=2;i*i<=1000000;i++){
//         for(int j=2;j*i<=1000000;j++){
//             countdiv[i*j]++;
//         }
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int gcd_ = gcd(a,b);
//         cout<<countdiv[gcd_]<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
 
 
const int N = 10e+6;
int countDiv[N+5];
 int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}
void countDivisorCount() {
	countDiv[1] = 1;
	for (int i = 2; i <= N; i++) {
		countDiv[i] = 2;
	}
 
	for (int i = 2; i <= N; i++) {
		for (int j = 2*i; j <= N; j += i) {
			countDiv[j]++;
		}
	}
}
 
int findDivCount(int g) {
	return countDiv[g];
}
 
int main() {
	int t;
	scanf("%d", &t);
	countDivisorCount();
	while (t--) {
		int a,b;
		scanf("%d %d", &a, &b);
		int gcd_ = ceil(gcd(a,b)*0.1);
		printf("%d\n", countDiv[gcd_]);
	}
}
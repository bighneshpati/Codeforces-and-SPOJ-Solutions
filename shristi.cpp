#include "bits/stdc++.h"
using namespace std;
#define int long long
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   vector<int> arr;
    arr.push_back(34);
    arr.push_back(36);
    arr.push_back(23);
    arr.push_back(12);
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<*max_element(arr.begin(),arr.end());
}
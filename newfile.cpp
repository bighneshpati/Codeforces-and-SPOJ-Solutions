#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool cmp(int a,int b){//a -> 34 b -> 212
    return a>b;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   //STL
    vector<int> arr; //insert 10 in the middle of the array 
    for(int i=0;i<5;i++){// arr[n];  
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    // arr.insert(arr.begin()+2,60);
    sort(arr.begin(),arr.end(),cmp);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}
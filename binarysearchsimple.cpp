#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool binary_Search(int temp,vector<int> &arr){
    int low = 0;
    int high = arr.size();
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid]==temp)
            return true;
        else if(arr[mid]>temp)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return false;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=1;i<n;i++){
       int j = i;
       while(j>0 and arr[j]<arr[j-1]){
           swap(arr[j],arr[j-1]);
           j--;
       }
   }
   int m;
   cin>>m;
   vector<int> ele(m);
   for(int i=0;i<m;i++){
       cin>>ele[i];
   }
    for(int i=0;i<m;i++){
        if(binary_Search(ele[i],arr))
            cout<<"Present"<<endl;
        else
            cout<<"Not Present"<<endl;
    }
   return 0;
}
#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int partition(vector<int>&arr,int start,int end){
    int i = start-1;
    int j = start;
    int pivot = arr[end];
    while(j<end){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[j]);
    return i+1;
}
void quickSort(vector<int>&arr,int start,int end){
    if(start>=end){
        return;
    }
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   vector<int> arr{4,2,4,5,1,9};
   int n = arr.size();
   quickSort(arr,0,n-1);
   for(auto i: arr){
       cout<<i<<" ";
   }
   return 0;
}
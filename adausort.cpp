#include "bits/stdc++.h"
using namespace std;
#define int long long
struct ele
{
int index,value;
};

ele arr[100007];

//comparator to perform unstable sort cool bruh
bool comp(ele a,ele b)
{
    if(a.value!=b.value)
        return a.value<b.value;   //to ensure identical elements order is changed after sorting
    return a.index>b.index;
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
   for(int i=0;i<n;i++)
   {   
       cin>>arr[i].value;
       arr[i].index=i+1;  //storing position of elements in the original array
   }
   sort(arr,arr+n,comp);  
   
   for(int i=0;i<n;i++)
    cout<<arr[i].index<<" ";
   return 0;
}
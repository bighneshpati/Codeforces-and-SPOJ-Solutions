#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
bool binarySearch(int i,int j,int d,vector<int>&arr){
    int low = i;
    int high = j;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(d==arr[mid]){
            return true;
        }
        else if(arr[mid]<d){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        return false;
    }
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
       cin>>arr[n];
   }
    bool ans = false;
   if(n>=130){
       cout<<"Yes"<<endl;
   }
   else if(n<130){
       sort(begin(arr),end(arr));
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               for(int k=j+1;k<n;k++){
                   int d = arr[i]^arr[j]^arr[k];
                   ans = binarySearch(k+1,n-1,d,arr);
                   if(ans){
                       cout<<"Yes"<<endl;
                       goto break_here;
                   }
               }
           }
       }
       break_here:
            if(!ans){
                cout<<"No"<<endl;
            }
   }
   return 0;
}
// #include <iostream>

// using namespace std;

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// bool binarySearch(int i, int j, unsigned long long int d, unsigned long long int arr[])
// {
//     if (i <= j)
//     {

//         int mid = i + (j - i) / 2;
//         if (arr[mid] == d)
//         {
//             return true;
//         }
//         if (arr[mid] > d)
//         {
//             return binarySearch(i, mid - 1, d, arr);
//         }

//         return binarySearch(mid + 1, j, d, arr);
//     }
//     return false;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     bool ans = false;
//     int n;
//     cin >> n;
//     unsigned long long int arr[100000];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (n >= 130)
//     {
//         cout << "Yes" << endl;
//     }

//     else if (n < 130)
//     {

//         sort(arr, arr + n);

//         for (int i = 0; i < n; i++)
//         {
//             // bool isBreaking;
//             for (int j = i + 1; j < n; j++)
//             {
//                 for (int k = j + 1; k < n; k++)
//                 {
//                     unsigned long long int d = arr[i] ^ arr[j] ^ arr[k];
                   
//                     ans = binarySearch(k+1, n-1, d, arr);
//                     //cout << " ans : " << k+1 << endl;
//                     if (ans)
//                     {
//                         cout << "Yes" << endl;
//                         goto break_me;
//                     }
//                 }
//             }
//         }
//     break_me:
//         if (!ans)
//         {
//             cout << "No" << endl;
//         }
        
//     }

//     return 0;
// }


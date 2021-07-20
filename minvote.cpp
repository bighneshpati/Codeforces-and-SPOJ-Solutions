#include "bits/stdc++.h"
using namespace std;
#define int long long
int sum(int i,int j,vector<int>&prefsum){
    if(i==0)
        return prefsum[j];
    return prefsum[j] - prefsum[i-1];
}
void voteall(int i,int j,vector<int>&votes){
    votes[j]++;
    if(i>0)
        votes[i-1]--;
}
bool ispossibleright(int &i,int mid ,vector<int> &arr,vector<int>&prefsum){
    int val = arr[i];
    if(sum(i+1,mid-1,prefsum)<=val)
        return true;
    return false;
}
int findright(vector<int> &arr,vector<int>&prfsum,int &i){
    int low = i+1;
    int high = arr.size()-1;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(ispossibleright(i,mid,arr,prfsum)){
            low = mid + 1;
        }
        else{
            if(ispossibleright(i,mid-1,arr,prfsum)){
                return mid;
            }
            high = mid - 1;
        }
    }
    return low ;
}
bool ispossibleleft(int &i,int mid,vector<int> &arr,vector<int> &prefsum){
    int val = arr[i];
    if(sum(mid+1,i-1,prefsum)<=val)
        return true;
    return false;
}
int findleft(vector<int> &arr,vector<int> &prefsum,int &i){
    int low = 0;
    int high = i-1;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(ispossibleleft(i,mid,arr,prefsum))
            high = mid - 1;
        else{
            if(ispossibleleft(i,mid+1,arr,prefsum))
                return mid;
            low = mid + 1;
        }
    }
    return high;
}
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> prfsum(n);
        prfsum[0] = arr[0];
        for(int i=1;i<n;i++){
            prfsum[i] = prfsum[i-1] + arr[i];
        }
        vector<int> votes(n,0);
        for(int i=0;i<n-1;i++){
            int j = findright(arr,prfsum,i);
            voteall(i+1,j-1,votes);
        }
        for(int i=1;i<n;i++){
            int k = findleft(arr,prfsum,i);
            voteall(k+1,i-1,votes);
        }
        for(int i=n-2;i>=0;i--){
            votes[i] = votes[i+1] + votes[i];
        }
        for(int i=0;i<n;i++){
            cout<<votes[i]<<" ";
        }
        cout<<endl;
    }
   return 0;
}
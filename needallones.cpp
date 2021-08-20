#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int32_t main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
   int m ,n;
   cin>>m>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> rect(n);
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(arr[j][i]!=0){
                rect[i] += arr[j][i];
            }
            else
                break;
        }
    }
    //debug
    // for(int i=0;i<n;i++){
    //     cout<<rect[i]<<" ";
    // }
    vector<int> nse(n,n);
    vector<int> pse(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and rect[i]<rect[st.top()]){
            nse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty() and rect[i]<rect[st.top()]){
            pse[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    int maxarea = LLONG_MIN;
    for(int i=0;i<n;i++){
        maxarea = max(maxarea,(nse[i]-pse[i]-1)*rect[i]);
    }
    cout<<maxarea<<endl;
   return 0;
}
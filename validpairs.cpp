#include "bits/stdc++.h"
using namespace std;
const int maxn = 1e6 + 1;
#define int long long
int countPairs(vector<int> numbers, int k) {
        int count = 0;
        int i = 0;
        int j = numbers.size() - 1;
        sort(begin(numbers),end(numbers));

        while (i < j) {
            if (numbers[i] + k == numbers[j]) {
                while (i < j && numbers[i] == numbers[i + 1])
                    i++;
                while (i < j && numbers[j] == numbers[j-1])
                    j--;

                count += 1;
                i++;
                j--;
            } else if (numbers[i] + k < numbers[k])
                i++;
            else
                j--;
        }
        return count;
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
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    int k;
    cin>>k;
    int ans = countPairs(numbers,k);
    cout<<ans<<endl;
   return 0;
}
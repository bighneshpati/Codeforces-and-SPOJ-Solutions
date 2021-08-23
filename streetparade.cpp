#include <cstdio>
#include <cstring>
#include <algorithm>
#include <stack>
#include "bits/stdc++.h"
using namespace std;

int a[1111], n;

int main() {
    ios::sync_with_stdio(false);
   cin.tie(0);
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
  while (scanf("%d", &n) && n != 0) {
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int k = 0, i = 0;
    stack<int> st;
    while (i < n) {
      while (st.size() && st.top() == k + 1) k++, st.pop();
      if (a[i] != k + 1) st.push(a[i]);
      else k++;
      i++;
    }
    while (st.size() && st.top() == k + 1) k++, st.pop();
    puts(k == n ? "yes" : "no");
  }
}
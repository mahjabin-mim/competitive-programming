/**
 *    author:  Mahjabin7
 *    created: 01.12.2024 21:40:52
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   int t;
   cin >> t;
   while (t--) {
      int d, n;
      cin >> d >> n;

      vector<long long> v(n + 1);
      for (int i = 1; i <= n; i++) {
         cin >> v[i];
      }

      vector<long long> preSum(n + 1);
      partial_sum(v.begin(), v.end(), preSum.begin());

      map<int, int> mp;
      long long ans = 0;
      for (auto x : preSum) {
         int modVal = x % d;
         ans += mp[modVal];
         mp[modVal]++;
      }
      cout << ans << '\n';
   }

   return 0;
}

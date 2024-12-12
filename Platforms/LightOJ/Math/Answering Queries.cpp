/**
 *    author:  Mahjabin7
 *    created: 08.12.2024 17:57:45
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
   int tt;
   cin >> tt;
   int cs = 1;
   while (tt--) {
      int n, q;
      cin >> n >> q;

      vector<int> v(n + 1);
      for (int i = 1; i <= n; i++) {
         cin >> v[i];
      }

      cout << "Case " << cs++ << ":\n";
      long long sum = 0;
      for (int i = 1; i <= n; i++) {
         sum += v[i] * (n - i) - v[i] * (i - 1);
      }

      while (q--) {
         int q_type;
         cin >> q_type;

         if (q_type == 0) {
            int x, val;
            cin >> x >> val;
            x++;
            sum -= v[x] * (n - x) - v[x] * (x - 1);
            v[x] = val;
            sum += v[x] * (n - x) - v[x] * (x - 1);
            continue;
         }

         cout << sum << '\n';
      }
   }

   return 0;
}

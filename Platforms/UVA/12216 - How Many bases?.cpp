/**
 *    author:  Mahjabin7
 *    created: 07.12.2024 20:35:29
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
   
   int mod = 100000007;
   int n, m, t, cs = 1;
   while (cin >> n >> m >> t && n > 0) {
      vector<long long> exp;
      for (int i = 2; i * i <= n; i++) {
         if (n % i == 0) {
            int e = 0;
            while (n % i == 0) {
               e++;
               n /= i;
            }
            exp.push_back(e * m);
         }
      }
      if (n > 1) {
         exp.push_back(1 * m);
      }

      long long x = 1;
      for (auto e : exp) {
         x = x * (e / t + 1) % mod; // at least t trailing zeros
      }

      long long y = 1;
      for (auto e : exp) {
         y = y * (e / (t + 1) + 1) % mod; // at least t + 1 trailing zeros
      }

      cout << "Case " << cs++ << ": " << (x - y + mod) % mod << '\n';
   }

   return 0;
}

/**
 *    author:  Mahjabin7
 *    created: 25.11.2024 05:03:48
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

   long long n;
   cin >> n;

   long long sq = sqrtl(n);
   while (sq * sq < n) sq++;
   while (sq * sq > n) sq--;
   assert(sq * sq == n);

   int ans = 0;
   for (int i = 2; i * i <= sq; i++) {
      if (sq % i == 0) {
         ans = max(ans, i);
         while (sq % i == 0) {
            sq /= i;
         }
      }
   }
   if (sq > 1) {
      ans = max(ans, (int)sq);
   }
   cout << ans << '\n';

   return 0;
}

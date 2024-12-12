/**
 *    author:  Mahjabin7
 *    created: 30.11.2024 06:47:50
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
   int cs = 1;
   while (t--) {
      long long w;
      cin >> w;
      
      cout << "Case " << cs << ": ";
      cs++;
      if (w % 2 != 0) {
         cout << "Impossible\n";
         continue;
      }

      // for (long long i = 2; i <= w/2; i += 2) {
      //    if (w % i == 0 && (w/i) % 2 != 0) {
      //       cout << w/i << " " << i << '\n';
      //       break;
      //    }
      // }
      long long n = w, m = 1;
      while (n % 2 == 0) {
         m *= 2;
         n /= 2;
      }
      cout << n << " " << m << "\n";
   }

   return 0;
}

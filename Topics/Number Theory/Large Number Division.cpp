/**
 *    author:  Mahjabin7
 *    created: 02.12.2024 06:59:17
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
      string a;
      int b;
      cin >> a >> b;

      long long ans = 0;
      for (long long i = 0; i < a.length(); i++) {
         if (a[i] == '-') {
            continue;
         }
         ans = (((ans * 10ll) % b) + ((a[i] - '0') % b)) % b;
      }

      cout << "Case " << cs << ": ";
      cs++;
      if (ans == 0) {
         cout << "divisible\n";
      }else {
         cout << "not divisible\n";
      }
   }

   return 0;
}

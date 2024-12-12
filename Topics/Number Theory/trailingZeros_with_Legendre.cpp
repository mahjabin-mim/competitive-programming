/**
 *    author:  Mahjabin7
 *    created: 05.12.2024 07:32:59
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int legenre(int n, int p) {
   int ans = 0;
   while (n) {
      ans += n / p;
      n /= p;
   }
   return ans;
} 

int get_trailing_zeros(int n) {
   return legenre(n, 5);
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int q;
      cin >> q;

      int l = 1;
      int r = 5 * q;
      int ans = -1;
      while (l <= r) {
         int mid = (l + r) / 2;
         if (get_trailing_zeros(mid) == q) {
            ans = mid;
            r = mid - 1;
         } else if(get_trailing_zeros(mid) > q) {
            r = mid - 1;
         } else {
            l = mid + 1;
         }
      }

      cout << "Case " << cs++ << ": ";
      if (ans == -1) {
         cout << "Impossible\n";
         continue;
      }
      cout << ans << '\n';
   }

   return 0;
}

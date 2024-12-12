/**
 *    author:  Mahjabin7
 *    created: 02.12.2024 07:20:55
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
      long long n, m;
      cin >> n >> m;

      long long ans = (n / 2) * m;
      cout << "Case " << cs++ << ": " << ans << '\n';
   }

   return 0;
}

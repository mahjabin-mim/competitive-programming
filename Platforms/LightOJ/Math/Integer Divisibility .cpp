/**
 *    author:  Mahjabin7
 *    created: 29.11.2024 05:09:22
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
      int n, digit;
      cin >> n >> digit;
      
      long long len = 0;
      long long x = 0;
      while (true) {
         len++;
         x = ((x * 10) % n + digit) % n;
         if(x == 0) {
            break;
         }
      }
      cout << "Case " <<cs << ": " << len << '\n';
      cs++;
   }

   return 0;
}

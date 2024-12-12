/**
 *    author:  Mahjabin7
 *    created: 29.11.2024 03:30:30
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int convert_to_decimal(int n) {
   string s = to_string(n);
   int decimal = 0;
   for (int i = 0; i < s.length(); i++) {
      int x = s[i] - '0';
      decimal = decimal * 2 + x;
   }
   return decimal;
} 

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      char dot;
      int a, b, c, d;
      cin >> a >> dot >> b >> dot >> c >> dot >> d;
      int aa, bb, cc, dd;
      cin >> aa >> dot >> bb >> dot >> cc >> dot >> dd;

      cout << "Case " << cs << ": ";
      cs++;
      if (a == convert_to_decimal(aa) && b == convert_to_decimal(bb) && c == convert_to_decimal(cc) && d == convert_to_decimal(dd)) {
         cout << "Yes\n";
      }else {
         cout << "No\n";
      }
   }

   return 0;
}

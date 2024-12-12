/**
 *    author:  Mahjabin7
 *    created: 29.11.2024 00:11:39
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int count_leap_year(int year) {
   int ans = year / 4;
   ans -= year / 100;
   ans += year / 400;
   return ans;
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      string m1, m2;
      char c1, c2;
      int d1, d2, y1, y2;
      cin >> m1 >> d1 >> c1 >> y1;
      cin >> m2 >> d2 >> c2 >> y2;

      if (m1 != "January" && m1 != "February") {
         y1++;
      }
      if (m2 == "January" || (m2 == "February" && d2 < 29)) {
         y2--;
      }

      int leap_year = count_leap_year(y2) - count_leap_year(y1 - 1);
      cout << "Case " << cs << ": " << leap_year << '\n';
      cs++;
   }

   return 0;
}

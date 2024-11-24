/**
 *    author:  Mahjabin7
 *    created: 24.11.2024 22:39:07
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e6;
vector<int> spf(N + 7);
int SmallestPrime () {
   for (int i = 1; i <= N; i++) {
      spf[i] = i;
   }
   for (int i = 2; i <= N; i++) {
      for (int j = i; j <= N; j += i){
         spf[j] = min(spf[j], i);
      }
   }
   return 0;
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    

   SmallestPrime();
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int m, n;
      cin >> m >> n;

      vector<int> PrimeFactorial;
      int x = m;
      while (x > 1) {
         int div = spf[x];
         while (x % div == 0) {
            x /= div;
         }
         PrimeFactorial.push_back(div);
      }
      
      int ans = 1e9;
      for(auto p : PrimeFactorial) {
         x = m;
         int e = 0;
         while (x % p == 0) {
            x /= p;
            e++;
         }
         int exp = 0;
         x = n;
         while (x) {
            exp += x/p;
            x /= p;
         }
         ans = min(ans, exp/e);
      }

      cout << "Case " << cs << ":\n";
      cs++;
      cout << (ans? to_string(ans):"Impossible to divide") << '\n';
   }

   return 0;
}

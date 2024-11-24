/**
 *    author:  Mahjabin7
 *    created: 24.11.2024 17:41:21
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 50000;
const int MOD = 1e9+7;
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
   while (t--) {
      int n;
      cin >> n;

      vector<int> divPower(N + 7);
      for (int i = 1; i <= n; i++) {
         int x = i;
         while (x > 1) {
            int div = spf[x];
            while (x % div == 0) {
               x /= div;
               divPower[div]++;
            }
         }
      }

      long long ans = 1;
      for(auto x : divPower) {
         ans = ((x+1) * ans) % MOD;
      }
      cout << ans << '\n';
   }

   return 0;
}

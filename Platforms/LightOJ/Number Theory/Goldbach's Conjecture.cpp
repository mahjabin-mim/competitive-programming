/**
 *    author:  Mahjabin7
 *    created: 23.11.2024 18:34:31
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e7;
vector<bool> prime(N + 7, true) ;

void seive () {
   prime[1] = 0;
   for (int i = 4; i <= N; i += 2) {
      prime[i] = 0;
   }
   for (int i = 3; i * i <= N; i += 2) {
      if (prime[i] == 0) {
         continue;
      }
      for (int j = i * i; j <= N; j += i) {
         prime[j] = 0;
      }
   }
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);  

   seive(); 
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int n;
      cin >> n;

      long long ans = 0;
      for (int i = 2; i <= n/2; i++) {
         if (prime[i] && prime[n-i]) {
            ans++;
         }
      }
      cout << "Case " << cs << ": " << ans << '\n';
      cs++;
   }

   return 0;
}

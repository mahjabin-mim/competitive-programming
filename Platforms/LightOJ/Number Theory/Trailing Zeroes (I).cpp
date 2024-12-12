/**
 *    author:  Mahjabin7
 *    created: 26.11.2024 19:29:26
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e6;
vector<bool> prime(N+7, true);
vector<int> primes;
void seive() {
    prime[0] = false;
    prime[1] = false;
    for (int i = 4; i <= N; i += 2) {
        prime[i] = false;
    }
    for (int i = 3; i * i <= N; i += 2) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i) {
               prime[j] = false;
            }
        } 
    }

    primes.push_back(2);
    for(int i = 3; i <= N; i += 2) {
      if (prime[i]) {
         primes.push_back(i);
      }
    }
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   seive(); 
   int cs = 1; 
   int t;
   cin >> t;
   while (t--) {
      long long n;
      cin >> n;

      long long ans = 1;
      for (auto p : primes) {
         if(p * p > n) {
            break;
         }
         long long e = 0;
         while (n % p == 0) {
            e++;
            n /= p;
         }
         ans *= (e + 1);
      }
      if(n > 1) {
         ans *= (1 + 1);
      }

      cout << "Case " << cs << ": " << ans - 1 << '\n';
      cs++;
   }

   return 0;
}

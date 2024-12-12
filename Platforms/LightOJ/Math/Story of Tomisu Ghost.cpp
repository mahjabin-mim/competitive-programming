/**
 *    author:  Mahjabin7
 *    created: 08.12.2024 01:00:24
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int MOD = 10000019;
const int N = 1e5;

vector<bool> is_prime(N + 7, true);
vector<int> primes;
void seive() {
   is_prime[0] = false;
   is_prime[1] = false;
   for (int i = 4; i <= N; i += 2) {
     is_prime[i] = 0;
   }
   for (int i = 3; i * i <= N; i += 2) {
      if (is_prime[i]) {
         for (int j = i * i; j <= N; j += i) {
            is_prime[j] = 0;
         }
      }
   }
   for (int i = 2; i <= N; i++) {
      if (is_prime[i]) {
         primes.push_back(i);
      }
   }
}

int legenre(int n, int p) {
   int freq = 0;
   while (n) {
      freq += n / p;
      n /= p;
   }
   return freq;
}

int binpow (int a, int b) {
   int ans = 1;
   while (b) {
      if (1 & b) {
         ans = 1ll * ans * a % MOD;
      }
      a = 1ll * a * a % MOD;
      b >>= 1;
   }
   return ans;
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);  

   seive();  
   int tt;
   cin >> tt;
   int cs = 1;
   while (tt--) {
      int n, t;
      cin >> n >> t;

      long long b = 1;
      for (auto p : primes) {
         if (p > n) break;
         int freq = legenre(n, p); 
         int e = freq / t;
         b = 1ll * b * binpow(p, e) % MOD;
      }

      cout << "Case " << cs++ << ": ";
      if (b == 1) {
         cout << -1 << '\n';
      } else { 
         cout << b << '\n';
      }
   }

   return 0;
}

/**
 *    author:  Mahjabin7
 *    created: 25.11.2024 05:57:38
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

long long mul (long long a, long long b, long long mod) {
   return (__int128(a % mod) * (b % mod)) % mod;
}

long long binpow (long long a, long long b, long long mod) {
   long long ans = 1;
   while (b) {
      if (1 & b) {
         ans = mul(ans, a, mod);
      }
      a = mul(a, a, mod);
      b >>= 1;
   }
   return ans;
}

long long inverse (long long a, long long mod) {
   return binpow(a, mod - 2, mod);
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   
   long long a, b, p;
   cin >> a >> b >> p;

   cout << binpow(a, b, p) % p << '\n';
   cout << mul(a, b, p) % p << '\n';
   cout << mul(a, inverse(b, p), p) % p << '\n';

   return 0;
}

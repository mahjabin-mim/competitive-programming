/**
 *    author:  Mahjabin7
 *    created: 28.11.2024 15:51:18
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

// count the frequency of P in N; iterative way
int legenre(long long n, long long p) {
   int ans = 0;
   while (n) {
      ans += n/p;
      n /= p;
   }
   return ans;
}

// recursive
int legenreR(long long n, long long p) {
   if (n == 0) {
      return 0;
   }
   return n / p + legenre(n / p, p);
} 

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    

   long long n, p;
   cin >> n >> p;
   cout << legenre(n, p) << '\n';

   return 0;
}

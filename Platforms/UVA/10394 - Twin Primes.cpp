/**
 *    author:  Mahjabin7
 *    created: 26.11.2024 05:50:18
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
const int N = 2e7;
vector<bool> prime(N + 7, true);
void seive() {
    prime[0] = false;
    prime[1] = false;
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
   vector<pair<int, int>> twinPrime;
   for(int i = 2; i <= N; i++) {
      if(prime[i] && prime[i+2]) {
         twinPrime.push_back({i, i+2});
      }
   }

   int n;
   while(cin >> n) {
      cout << "(" << twinPrime[n-1].first << ", " << twinPrime[n-1].second << ")\n";
   }

   return 0;
}

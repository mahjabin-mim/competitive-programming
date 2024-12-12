/**
 *    author:  Mahjabin7
 *    created: 26.11.2024 03:41:11
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 5e6;
vector<int> spf(N + 7);
vector <unsigned long long> preSum(N + 7);

void SmallestPrime () {
   for (int i = 2; i <= N; i++) {
      spf[i] = i;
   }
   for (int i = 2; i <= N; i++) {
      if (spf[i] == i) {
         for (int j = i; j <= N; j += i){
            spf[j] = min(spf[j], i);
         }
      }
   }
}

void phi_1toN () {
   for (int i = 1; i <= N; i++)
   {  
      int x = i;
      int phi_of_i = i;
      while (x > 1) {
         int div = spf[x];
         phi_of_i *= (double)(div-1) / div;
         while (x % div == 0) {
            x /= div;
         }
      }
      preSum[i] = preSum[i - 1] + 1ll * phi_of_i * phi_of_i;
   }
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);  

   SmallestPrime();
   phi_1toN();
   
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int a, b;
      cin >> a >> b;

      cout << "Case "<< cs << ": " << preSum[b] - preSum[a - 1] << '\n';
      cs++;
   }

   return 0;
}

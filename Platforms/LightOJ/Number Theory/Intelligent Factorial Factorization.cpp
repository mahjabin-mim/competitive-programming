/**
 *    author:  Mahjabin7
 *    created: 23.11.2024 07:27:42
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif 

const int N = 100;
vector<int> spf(N + 7);
int SmallestPrime (int n) {
   for (int i = 2; i <= n; i++) {
      spf[i] = i;
   }
   for (int i = 2; i <= n; i++) {
      for (int j = i; j <= n; j += i){
         spf[j] = min(spf[j], i);
      }
   }
   return 0;
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr); 

   SmallestPrime(N);   
   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int n;
      cin >> n;

      map<int, int> factorization;
      for(int i = 1; i <= n; i++) {
         int x = i;
         while (x > 1) {
            long long div = spf[x];
            long long count = 0;
            while (x % div == 0) {
               x /= div;
               factorization[div]++;
            }
         }
      } 

      cout << "Case " << cs << ": " << n << " = ";
      cs++;
     
      for(int i = 0; i < factorization.size(); i++) {
         if(factorization[i] == 0) {
            continue;
         }
         auto p = factorization[i];
         if(i == factorization.size() - 1) {
            cout << i << " (" <<  p << ")";
            break;
         }
         cout << i << " (" <<  p << ")" << " * ";
      }
      cout << '\n';  
   }
    
    return 0;
}

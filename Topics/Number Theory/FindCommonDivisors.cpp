/**
 *    author:  Mahjabin7
 *    created: 23.11.2024 04:04:31
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int gcd(int a, int b) {
   if(a == 0){
      return b;
   }
   return gcd(b % a, b);
} 

long long findGCD(vector<long long> v, int n) {
   long long g = v[0];
   for(int i = 1; i<n; i++) {
      g = gcd(v[i],g);
      if(g == 1){
         break;
      }
   }
   return g;
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    

   int n;
   cin >> n;
   vector<long long> v(n);
   for(int i = 0; i < n; i++) {
      cin >> v[i];
   }

   long long g = findGCD(v, n);
   vector<long long> commonDiv;
   for(int i = 1; 1ll * i * i <= g; i++) {
      if(g % i == 0) {
         commonDiv.push_back(i);
         if(i != g/i) {
            commonDiv.push_back(g/i);
         }
      }
   }
   cout << commonDiv.size() << endl;
    
    return 0;
}

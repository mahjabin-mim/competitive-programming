/**
 *    author:  Mahjabin7
 *    created: 05.12.2024 19:06:30
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    

   // find digit's count in a number with log;
   // formula = log10(n) + 1;
   // in any base = log(base)(n) + 1 --> log2(n) / log2(base) + 1;
   // find digits in N! so the number is huge. Precal of 1 - N --> log2(n);
   const int N = 1e6;
   vector<double> lg(N + 7);
   for (int i = 1; i <= N; i++) {
      lg[i] = log2(i) + lg[i-1];
   }

   int t;
   cin >> t;
   int cs = 1;
   while (t--) {
      int n, b;
      cin >> n >> b;
      cout << "Case " << cs++ << ": " << (int)(lg[n] / log2(b) + 1) << '\n';
   }

   return 0;
}

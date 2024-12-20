/**
 *    author:  Mahjabin7
 *    created: 17.11.2024 16:46:21
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5;
vector<int> spf(N + 7);
void SmallestPrime () {
   for (int i = 1; i <= N; i++) {
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

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    SmallestPrime(N); // stores smallest prime divisor for all number
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << "SmallestPrime : " << spf[n] << endl; 

        // find the prime factors of n
        vector<int> ans;
        while (n > 1) {
            ans.push_back(spf[n]);
            n /= spf[n];
        }
        cout << "Prime Factors : ";
        for (auto x:ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    
    return 0;
}

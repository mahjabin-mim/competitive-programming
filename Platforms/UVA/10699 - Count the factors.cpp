/**
 *    author:  Mahjabin7
 *    created: 22.11.2024 15:36:47
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e6;
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    vector<int> spf(N+7);
    for(int i=1; i<=N; i++){
        spf[i] = i;
    }
    for(int i=2; i<=N; i++){
        for(int j=i; j<=N; j+=i){
            spf[j] = min(spf[j],i);
        }
    } 
    
    vector<long long> diffPrime(N+7);
    for(int i=2; i<=N; i++){
        int n = i;
        while(n > 1){
            diffPrime[i]++;
            int div = spf[n];
            while(n % div == 0){
                n /= div;
            }
        }
    }  
    
    int n; 
    while (cin >> n) {
        if(n == 0){
            return 0;
        }
       cout << n << " : " << diffPrime[n] << endl;
    }
    
    return 0;
}

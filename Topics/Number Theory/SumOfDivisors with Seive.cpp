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

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> sumOfDivisors(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i){
            sumOfDivisors[j] += i;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<< sumOfDivisors[i] << " ";
    }
    
    return 0;
}

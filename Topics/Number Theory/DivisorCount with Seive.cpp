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
    vector<int> divisorCount(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i){
            divisorCount[j]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<< divisorCount[i] << " ";
    }
    
    return 0;
}

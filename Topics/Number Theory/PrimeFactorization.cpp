/**
 *    author:  Mahjabin7
 *    created: 17.11.2024 16:35:32
**/
// prime factorization
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

    vector<int> ans;
    while(n % 2 == 0){
        ans.push_back(2);
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) {
            while (n % i == 0) {
                ans.push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1){
        ans.push_back(n);
    }
    for(auto x:ans){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}

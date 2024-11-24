/**
 *    author:  Mahjabin7
 *    created: 20.11.2024 22:34:51
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e6;
vector<int> spf(N + 7);
vector<int> divisorCount(N + 7, 1);
vector<int> sumOfDivisors(N + 7, 1);
void smallestPrime(int n){
    for (int i = 2; i <= n; i++) {
        spf[i] = i;
    }
    for(int i = 2; i <= n; i++){
        for(int j = i; j <= n; j += i){
            spf[j] = min(spf[j], i);
            divisorCount[j]++;
            sumOfDivisors[j] += i;
        }
    }
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    smallestPrime(N);
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;

        int lpf = spf[x];
        int divCount = divisorCount[x];
        int sumOfDiv = sumOfDivisors[x];
        int gpf = 0, diffFac = 0, totalFac = 0;
        map<int,int> mp;
        while(x > 1){
            gpf = max(gpf,spf[x]);
            diffFac++;
            int div = spf[x];
            while(x % div == 0){
                totalFac ++;
                x /= div;
            }
        }

        cout << lpf << ' ' << gpf << ' ' << diffFac << ' ' << totalFac << ' ' << divCount << ' ' << sumOfDiv << endl;
    }
    
    return 0;
}

/**
 *    author:  Mahjabin7
 *    created: 02.10.2024 03:09:18
**/
// https://www.spoj.com/problems/DCEPCA03/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5+7;
vector <long long> phi(N);

void phi_1toN(int n){
    for(int i=1; i<=n; i++){
        phi[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(phi[i] == i){
            for(int j=i; j<=n; j+=i){
                phi[j] -= (phi[j]/i);
            }
        }
    }
}

int main() 
{    
    optimized
    phi_1toN(N);
    partial_sum(phi.begin(), phi.end(), phi.begin());

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<phi[n]*phi[n]<<endl;
    }
 
    return 0;
}

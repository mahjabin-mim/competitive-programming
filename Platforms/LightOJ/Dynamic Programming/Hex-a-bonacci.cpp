/**
 *    author:  Mahjabin7
 *    created: 22.10.2024 14:42:20
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
long long a, b, c, d, e, f, n;
long long MOD = 1e7+7;
const int N = 1e4+7;
vector<long long> dp(N, -1);

long long fn(long long n) 
{
    if (dp[n] != -1) return dp[n];
    if (n == 0) return dp[n] = a;
    if (n == 1) return dp[n] = b;
    if (n == 2) return dp[n] = c;
    if (n == 3) return dp[n] = d;
    if (n == 4) return dp[n] = e;
    if (n == 5) return dp[n] = f;

    dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % MOD;
    return dp[n];
}
int main() {
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        cin>>a>>b>>c>>d>>e>>f>>n;

        //---- recursive dp ----//
        //cout<<"Case "<<cs<<": "<<fn(n) % MOD<<endl;
        //cs++;
        //dp.assign(N, -1);

        //---- iterative dp ----//
        vector <long long> itdp(n+7);
        itdp[0] = a;
        itdp[1] = b;
        itdp[2] = c;
        itdp[3] = d;
        itdp[4] = e;
        itdp[5] = f;
        for(int i=6; i<=n; i++){
            itdp[i] = (itdp[i-1] + itdp[i-2] + itdp[i-3] + itdp[i-4] + itdp[i-5] + itdp[i-6]) % MOD;
        }
        cout<<"Case "<<cs<<": "<<itdp[n] % MOD<<endl;
        cs++;
    }
    return 0;
}

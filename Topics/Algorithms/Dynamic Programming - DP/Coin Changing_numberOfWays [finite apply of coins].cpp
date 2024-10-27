/**
 *    author:  Mahjabin7
 *    created: 26.10.2024 15:07:11
**/
// Find out the number of ways you can make the change if the given amount using the coins.
// condition : When you have finite coins of a single value
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int main() 
{    
    optimized
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector <int> coin(n+1);
        vector <int> freq(n+1);
        for(int i=1; i<=n; i++){
            cin>>coin[i];
        }
        for(int i=1; i<=n; i++){
            cin>>freq[i];
        }

        int mod = 100000007;
        long long itdp[n+1][k+1];
        memset(itdp, 0, sizeof(itdp));
        for(int i=0; i<=n; i++){
            itdp[i][0] = 1;
        }
        for(int r=1; r<=n; r++){
            for(int c=1; c<=k; c++){
                for(int f=0; f<=freq[r]; f++){
                    if(c-coin[r]*f < 0){
                        break;
                    }
                    itdp[r][c] += (itdp[r-1][c-coin[r]*f]) % mod;
                }
            }
        }
        cout<<"Case "<<cs<<": "<<itdp[n][k] % mod<<endl;
        cs++;
    }
 
    return 0;
}

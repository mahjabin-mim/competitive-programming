/**
 *    author:  Mahjabin7
 *    created: 24.10.2024 16:08:08
**/
// Find out the number of ways you can make the change if the given amount using the coins.
// condition : When you have infinite coins of a single value
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
        int n,w;
        cin>>n>>w;

        vector <int> coin(n+1);
        for(int i=1; i<=n; i++){
            cin>>coin[i];
        }

        int mod = 100000007;
        int itdp[n+1][w+1];
        memset(itdp, 0, sizeof(itdp));
        for(int i=0; i<=n; i++){
            itdp[i][0] = 1;
        }
        for(int r=1; r<=n; r++){
            for(int c=0; c<=w; c++){
                if(coin[r]>c){ // if the coin value if greater than column value then copy the value from above
                    itdp[r][c] = itdp[r-1][c]; 
                    continue;
                }
                itdp[r][c] = (itdp[r-1][c] + itdp[r][c-coin[r]]) % mod;
                // if column value is greater then --> take the value of above + the value of [rth row][column-coin value]
            }
        }
        cout<<"Case "<<cs<<": "<<itdp[n][w]<<endl;
        cs++;
    }
 
    return 0;
}

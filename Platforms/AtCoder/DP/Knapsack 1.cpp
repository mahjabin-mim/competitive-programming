/**
 *    author:  Mahjabin7
 *    created: 20.10.2024 23:57:46
**/
// https://atcoder.jp/contests/dp/tasks/dp_d
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
    long long n,w;
    cin>>n>>w;

    vector <pair<long long,long long>> arr(n+1);
    for(long long i=1; i<=n; i++){
        long long u,v;
        cin>>u>>v;
        arr[i] = {u,v};
    }

    //---- iterative dp ----//
    long long itdp[n+1][w+1];
    memset(itdp, 0, sizeof(itdp));

    for(long long row=1; row<=n; row++){
        long long u = arr[row].first;
        long long v = arr[row].second;
        long long c = 0;
        for(long long col=1; col<=w; col++){
            if(col<u){
                itdp[row][col] = itdp[row-1][col];
                continue;
            }
            itdp[row][col] = max(itdp[row-1][c]+v, itdp[row-1][col]);
            c++;
        }
    }
    cout<<itdp[n][w]<<endl;
 
    return 0;
}

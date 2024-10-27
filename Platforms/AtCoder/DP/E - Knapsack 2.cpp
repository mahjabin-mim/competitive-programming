/**
 *    author:  Mahjabin7
 *    created: 21.10.2024 21:13:24
**/
// https://atcoder.jp/contests/dp/tasks/dp_e
// Selecting i number of items within j number of profit to achieve the minimum weight (i shongkhok item niye j shongkhok profit e min weight)
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
    long long val = 0;
    for(long long i=1; i<=n; i++){
        long long u,v;
        cin>>u>>v;
        arr[i] = {u,v};
        val += v;
    }

    //---- iterative dp ----//
    long long itdp[n+1][val+1];
    int inf = 1e9+7;
    memset(itdp, inf, sizeof(itdp));
    for(int i=0; i<=n; i++){
        itdp[i][0] = 0;
    }
    for(long long row=1; row<=n; row++){
        long long u = arr[row].first;
        long long v = arr[row].second;
        long long c = 0;
        for(long long col=1; col<=val; col++){
            if(col<v){
                itdp[row][col] = itdp[row-1][col];
                continue;
            }
            itdp[row][col] = min(itdp[row-1][c]+u, itdp[row-1][col]);
            c++;
        }
    }    
    for(long long ans=val; ans>=0; ans--) {
        if(itdp[n][ans] <= w) {
          cout<<ans<<endl;
          break;
        }
    }
 
    return 0;
}

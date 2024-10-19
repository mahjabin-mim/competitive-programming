/**
 *    author:  Mahjabin7
 *    created: 19.10.2024 17:55:14
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5+7;
int d[N][3+1]={-1};
int arr[N+1][3+1];

int dp(int r,int c)
{
    if(d[r][c]!=-1 || r==0){
        return d[r][c];
    }
    for(int i=1; i<=3; i++){
        if(i!=c){
            d[r][c]=max(d[r][c],dp(r-1,i)+arr[r][c]);
        }
    }
    return d[r][c];
}

int main() 
{    
    optimized
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            cin>>arr[i][j];
        }
    }
   
    //---- recursive dp ----//
    memset(d,-1,sizeof d);
    for(int i=1; i<=3; i++){
        d[0][i]=0;
    }
    dp(n, 1);
    dp(n, 2);
    dp(n, 3);
    int ans = max({d[n][1], d[n][2], d[n][3]});
    //cout<<ans<<endl;

    //---- iterative dp ----//
    int itdp[n+1][3+1];
    itdp[1][1] = arr[1][1];
    itdp[1][2] = arr[1][2];
    itdp[1][3] = arr[1][3];
    for(int i=2; i<=n; i++){
        int x = arr[i][1];
        int y = arr[i][2];
        int z = arr[i][3];
        itdp[i][1] = max(itdp[i-1][2]+x, itdp[i-1][3]+x);
        itdp[i][2] = max(itdp[i-1][1]+y, itdp[i-1][3]+y);
        itdp[i][3] = max(itdp[i-1][1]+z, itdp[i-1][2]+z);
    }
    ans = max({itdp[n][1], itdp[n][2], itdp[n][3]});
    cout<<ans<<endl;

    return 0;
}

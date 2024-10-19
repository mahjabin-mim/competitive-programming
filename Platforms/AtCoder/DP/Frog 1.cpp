/**
 *    author:  Mahjabin7
 *    created: 17.09.2024 15:33:33
**/
// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5+7;
vector <int> arr(N);
vector <int> cost(N,-1);
int n;

int dp(int i)
{
    if(i >= n){
        return 0;
    }

    //base case
    if(i == n-1){
        return cost[i] = abs(arr[i]-arr[n]);
    }

    //memo-i-zation
    if(cost[i] != -1){
        return cost[i];
    }

    int x = abs(arr[i]-arr[i+1]) + dp(i+1);
    int y = abs(arr[i]-arr[i+2]) + dp(i+2);
    return cost[i] = min(x,y);
}

int main() 
{    
    optimized
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    //---- recursive dp ----//
    //cout<<dp(1)<<endl;

    //---- iterative dp ----//
    vector <int> itdp(n+1);
    itdp[1] = 0;
    itdp[2] = abs(arr[1]-arr[2]);
    for(int i=3; i<=n; i++){
        int x = abs(arr[i]-arr[i-1]);
        int y = abs(arr[i]-arr[i-2]);
        itdp[i] = min(itdp[i-1]+x, itdp[i-2]+y);
    } 
    cout<<itdp[n]<<endl;   
 
    return 0;
}

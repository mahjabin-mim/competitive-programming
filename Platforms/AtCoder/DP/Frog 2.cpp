/**
 *    author:  Mahjabin7
 *    created: 17.09.2024 15:33:33
**/
// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5+7;
vector <int> adj(N);
vector <int> cost(N,-1);
int n,k;

int dp(int i)
{
    if(i >= n){
        return 0;
    }

    //base case
    if(i == n-1){
        return cost[i] = abs(adj[i]-adj[n]);
    }

    //memo-i-zation
    if(cost[i] != -1){
        return cost[i];
    }

    int x=INT_MAX;
    for(int j=1; j<=k; j++){
        if(i+j > n){
            break;
        }
        int y = abs(adj[i]-adj[i+j]) + dp(i+j);
        x = min(x,y);
    }
    return cost[i] = x;
}

int main() 
{    
    optimized
    cin>>n>>k;

    for(int i=1; i<=n; i++){
        cin>>adj[i];
    }
    cout<<dp(1)<<endl;
 
    return 0;
}

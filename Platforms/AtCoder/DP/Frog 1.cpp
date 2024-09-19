/**
 *    author:  Mahjabin7
 *    created: 17.09.2024 15:33:33
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
vector <int> adj(N);
vector <int> cost(N,-1);
int n;

int dp(int i)
{
    if(i >= n){
        return 0;
    }

    //base case
    if(i == n-1){
        return cost[i] = abs(adj[i]-adj[n]);
    }

    if(cost[i] != -1){
        return cost[i];
    }

    int x = abs(adj[i]-adj[i+1]) + dp(i+1);
    int y = abs(adj[i]-adj[i+2]) + dp(i+2);
    return cost[i] = min(x,y);
}

int main() 
{    
    optimized
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>adj[i];
    }
    cout<<dp(1)<<endl;
 
    return 0;
}

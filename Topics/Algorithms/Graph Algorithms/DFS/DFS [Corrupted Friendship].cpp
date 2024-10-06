/**
 *    author:  Mahjabin7
 *    created: 06.10.2024 14:33:52
**/
// https://lightoj.com/problem/corrupted-friendship
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5+7;
vector <int> adj[N];
vector <bool> visited(N,false);
vector <int> totalCount(N,0);
long long pairCount = 0;

void dfs(int u){
    visited[u]=1;
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v);
            pairCount += (totalCount[u]*totalCount[v]);
            totalCount[u] += totalCount[v];
        }
    }
    totalCount[u] = totalCount[u]+1;
}

int main() 
{    
    optimized
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        int n;
        cin>>n;

        for(int i=1; i<n; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1);
        cout<<"Case "<<cs<<": "<<n-1<<" "<<pairCount<<'\n';
        cs++;

        pairCount=0;
        for(int i=0; i<=n; i++){
            adj[i].clear();
            visited[i]=false;
            totalCount[i]=0;
        } 
    }
 
    return 0;
}

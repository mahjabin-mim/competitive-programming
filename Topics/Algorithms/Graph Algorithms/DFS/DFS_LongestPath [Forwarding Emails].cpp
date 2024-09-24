/**
 *    author:  Mahjabin7
 *    created: 22.09.2024 16:34:45
**/
// https://lightoj.com/problem/forwarding-emails
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
const int N=50000+7;
vector <int> adj[N];
vector <int> visited(N,0);
vector <int> vertex(N,0);
int node=0;

int dfs(int u){
    visited[u]=1;
    for(auto v:adj[u]){
        if(!visited[v]){
            node++;
            dfs(v);
        }
    }
    visited[u]=0;
    vertex[u]=node;
    return node;
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

        for(int i=1; i<=n; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        int mx=0;
        int ans=0;
        for(int i=1; i<=n; i++){
            if(vertex[i]==0){
                node=1;
                vertex[i]=dfs(i);
            }
            if(vertex[i]>mx){
                mx=vertex[i];
                ans=i;
            }
        }

        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;
        
        for(int i=1; i<=n; i++){
            adj[i].clear();
            vertex[i]=0;
        }
    }
 
    return 0;
}

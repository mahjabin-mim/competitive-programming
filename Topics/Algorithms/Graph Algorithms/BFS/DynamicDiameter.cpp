/**
 *    author:  Mahjabin7
 *    created: 14.10.2024 13:44:51
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 3e5+7;
vector <int> adj[N];
vector <int> visited(N,false);
vector <int> level(N,0);

pair <int, int> bfs(int s)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;
    int node=s;
    int cost=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                level[v]=level[u]+1;
                if(cost<level[v]){
                    cost=level[v];
                    node=v;
                }
            }
        }
    }
    pair <int, int> p = {node,cost};
    return p;
}

int main() 
{    
    optimized
    int n;
    cin>>n;

    for(int i=0; i<n-1; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    pair<int, int> x = bfs(1);
    vector <int> cost(level);
    visited.assign(N,false);
    level.assign(N,0);
    pair <int, int> y = bfs(x.first);

    for(int i=1; i<=n; i++){
        if(cost[i]==x.second || level[i]==0 || level[i]==y.second){
            cout<<y.second+1<<endl;
        }else{
            cout<<y.second<<endl;
        }
    }

    return 0;
}

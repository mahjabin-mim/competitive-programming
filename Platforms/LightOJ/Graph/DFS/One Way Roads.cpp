/**
 *    author:  Mahjabin7
 *    created: 12.10.2024 02:25:34
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
vector <pair<int,int>> adj[N];
vector <pair<int,int>> directed[N+1];
vector <bool> visited(N,false);
int cost=0;

void dfs(int u)
{
    visited[u]=1;
    for(auto [v,w]:adj[u]){ 
        if(!visited[v]){
            bool flag=false;
            for(auto [i,j]:directed[u]){
                if(i==v){
                    flag=true;
                }
            }
            if(!flag){
                cost+=w;
            }
            dfs(v);
        }
    }
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

        for(int i=0; i<n; i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
            directed[u].push_back(make_pair(v,w));
        }

        int ans=INT_MAX;
        visited[1]=1;
        dfs(adj[1][0].first);
        bool flag=false;
        for(auto [v,w]:directed[1]){
            if(v==adj[1][0].first){
                flag=true;
            }
        }
        if(!flag){
            cost+=adj[1][0].second;
        }
        flag=false;
        for(auto [v,w]:directed[adj[1][1].first]){
            if(v==1){
                flag=true;
            }
        }
        if(!flag){
            cost+=adj[1][1].second;
        }
        ans=min(ans,cost);
        visited.assign(N,false);
        cost=0;

        visited[1]=1;
        dfs(adj[1][1].first);
        flag=false;
        for(auto [v,w]:directed[1]){
            if(v==adj[1][1].first){
                flag=true;
            }
        }
        if(!flag){
            cost+=adj[1][1].second;
        }
        flag=false;
        for(auto [v,w]:directed[adj[1][0].first]){
            if(v==1){
                flag=true;
            }
        }
        if(!flag){
            cost+=adj[1][0].second;
        }
        ans=min(ans,cost);
        visited.assign(N,false);
        cost=0;
        
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;

        for(int i=0; i<=n; i++){
            adj[i].clear();
            directed[i].clear();
        }
    }
 
    return 0;
}

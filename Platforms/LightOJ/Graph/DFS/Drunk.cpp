/**
 *    author:  Mahjabin7
 *    created: 15.09.2024 15:48:51
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
vector <int> adj[N];
vector <int> visited(N,-1);
bool ans = false;

int dfs(int u)
{   
    if(ans){
        return 0;
    }

    // -1 means not visited
    // 0 means visiting adj nodes
    // 1 means visited all adj nodes
    visited[u] = 0;
    for(auto v:adj[u]){
        if(visited[v] == -1){
            dfs(v);
        }else if(visited[v] == 0){
            ans = true;
        }
    }
    visited[u] = 1;

    return 0;
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

        map <string,int> mp;
        int val=1;
        for(int i=0; i<n; i++){
            string u,v;
            cin>>u>>v;
            
            if(mp[u]<1){
                mp[u]=val;
                val++;
            }
            if(mp[v]<1){
                mp[v]=val;
                val++;
            }

            int uu=mp[u];
            int vv=mp[v];
            adj[uu].push_back(vv);
        }
        
        for(auto [i,j]:mp){
            if(visited[j]==-1){
                dfs(j);
            }  
        }
        
        cout<<"Case "<<cs<<": "<<(ans? "No":"Yes")<<'\n';
        cs++;

        for(int i=0; i<N; i++){
            adj[i].clear();
        }
        visited.assign(N,-1);
        ans = false;
    }
 
    return 0;
}

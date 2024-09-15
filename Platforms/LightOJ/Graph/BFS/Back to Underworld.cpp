/**
 *    author:  Mahjabin7
 *    created: 08.09.2024 16:31:40
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N=1e5+7;
vector <int> adj[N];
vector <bool> visited(N,false); 
map <int,int> mp;

void bfs(int s){
    vector <int> level(N,-1);
    queue <int> q;
    q.push(s);
    visited[s]=1;
    level[s]=0;
    mp[level[s]]++;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                level[v]=level[u]+1;
                mp[level[v]]++;
            }
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
        set <int> st;
        for(int i=0; i<n; i++){
            int u,v;
            cin>>u>>v;
            st.insert(u);
            st.insert(v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        long long ans=0;
        for(auto i:st){
            if(visited[i]){
                continue;
            }
            bfs(i);
            int teamA=0;
            int teamB=0;
            for(int i=0; i<mp.size(); i+=2){
                teamA+=mp[i];
            }
            for(int i=1; i<mp.size(); i+=2){
                teamB+=mp[i];
            }
            ans+=max(teamA,teamB);
            mp.clear();
            
        }
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;

        for(int i=0; i<N; i++){
            adj[i].clear();
            visited[i]=0;
        } 
    }
 
    return 0;
}

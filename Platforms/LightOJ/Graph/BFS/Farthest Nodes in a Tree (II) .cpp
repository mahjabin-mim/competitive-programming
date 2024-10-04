/**
 *    author:  Mahjabin7
 *    created: 30.09.2024 23:01:11
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
vector <pair<int,int>> adj[N];
vector <bool> visited(N,false);
vector <long long> cost(N,0);
pair <int,int> p;

void bfs(int s)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;
    cost[s]=0;
    int mx=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto [v,c]:adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                cost[v]=cost[u]+c;
                if(cost[v]>mx){
                    mx=cost[v];
                    p = make_pair(v,cost[v]);
                }
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

        for(int i=0; i<n-1; i++){
            int u,v,c;
            cin>>u>>v>>c;
            adj[u].push_back(make_pair(v,c));
            adj[v].push_back(make_pair(u,c));
        }

        bfs(0); // find first farthest node from root
        visited.assign(N,false);
        cost.assign(N,0);

        bfs(p.first); // first farthest node
        vector <long long> ans1(cost);
        visited.assign(N,false);
        cost.assign(N,0);

        bfs(p.first); // second farthest node
        vector <long long> ans2(cost);
        visited.assign(N,false);
        cost.assign(N,0);

        cout<<"Case "<<cs<<": "<<'\n';
        cs++;
        for(int i=0; i<n; i++){
            cout<<max(ans1[i],ans2[i])<<'\n';
        }

        for(int i=0; i<N; i++){
            adj[i].clear();
        } 
    }
 
    return 0;
}

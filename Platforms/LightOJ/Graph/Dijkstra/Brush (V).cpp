/**
 *    author:  Mahjabin7
 *    created: 04.10.2024 02:00:21
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
const int inf = 1e5;
vector <pair<int, int>> adj[N];
vector <long long> dist(N, inf);

void dijkstra(int s)
{
    priority_queue <pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, s});
    dist[s] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        long long weight = pq.top().first;
        pq.pop();
        if(weight > dist[u]){
            continue;
        }
        for(auto [v,w]:adj[u]){
            long long d = dist[u]+w;
            if(d < dist[v]){
                dist[v] = d;
                pq.push({d,v});
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
        int n,m;
        cin>>n>>m;

        for(int i=0; i<m; i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }

        dijkstra(1);
        cout<<"Case "<<cs<<": ";
        cs++;
        if(dist[n]==inf){
            cout<<"Impossible"<<endl;
        }else{
            cout<<dist[n]<<endl;
        }
        
        for(int i=0; i<=n; i++){
            adj[i].clear();
            dist[i] = inf;
        }
    }
 
    return 0;
}

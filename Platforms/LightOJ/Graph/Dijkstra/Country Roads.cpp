/**
 *    author:  Mahjabin7
 *    created: 13.10.2024 16:31:07
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
const int inf = 1e9+1;
vector <pair<int,int>> adj[N];
vector <int> cost(N,inf);

void dijkstra(int s)
{
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    cost[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        int u = pq.top().second;
        int weight = pq.top().first;
        pq.pop();
        for(auto [v,w]:adj[u]){
            int mx = max(w,cost[u]);
            if(mx<cost[v]){
                cost[v]=mx;
                pq.push({mx,v});
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

        for(int i=1; i<=m; i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }

        int c;
        cin>>c;
        dijkstra(c);
        cout<<"Case "<<cs<<": "<<endl;
        cs++;
        for(int i=0; i<n; i++){
            if(cost[i]==inf){
                cout<<"Impossible"<<endl;
            }else{
                cout<<cost[i]<<endl;
            }
        }

        for(int i=0; i<=n; i++){
            adj[i].clear();
            cost[i]=inf;
        }
    }
 
    return 0;
}

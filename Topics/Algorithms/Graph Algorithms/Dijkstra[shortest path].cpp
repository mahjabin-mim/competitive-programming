/**
 *    author:  Mahjabin7
 *    created: 28.09.2024 00:02:32
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
const long long inf = 1e18;
vector <pair<int,int>> adj[N];
vector <long long> dist(N,inf);
vector <int> parent(N);

void dijkstra(int s){
    priority_queue <pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0,s});
    dist[s]=0;
    while(!pq.empty()){
        int u = pq.top().second;
        long long weight = pq.top().first;
        pq.pop();
        if(weight > dist[u]){
            continue; // already got min weight of curr_node, so no need to calculate with max weight
        }
        for(auto [v,w]:adj[u]){
            long long d = dist[u]+w;
            if(d < dist[v]){
                dist[v] = d;
                pq.push({d,v});
                parent[v] = u; // path tracking by parent
            }
        }
    }
}

int main() 
{    
    optimized
    int n,r;
    cin>>n>>r;

    for(int i=1; i<=r; i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    dijkstra(1);

    if(dist[n]==inf){
        cout<<-1<<endl;
        return 0;
    }

    vector <int> path;
    int s=n;
    while(s!=0){
        path.push_back(s);
        s=parent[s];
    }

    reverse(path.begin(),path.end());
    for(auto p:path){
        cout<<p<<" ";
    }
    cout<<'\n';
 
    return 0;
}

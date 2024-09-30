/**
 *    author:  Mahjabin7
 *    created: 28.09.2024 00:02:32
**/
// https://lightoj.com/problem/not-the-best
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
vector <long long> distS(N,inf);
vector <long long> distD(N,inf);

void dijkstraS(int s){
    priority_queue <pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0,s});
    distS[s]=0;
    while(!pq.empty()){
        int u = pq.top().second;
        long long weight = pq.top().first;
        pq.pop();
        if(weight > distS[u]){
            continue; 
        }
        for(auto [v,w]:adj[u]){
            long long d = distS[u]+w;
            if(d < distS[v]){
                distS[v] = d;
                pq.push({d,v});
            }
        }
    }
}

void dijkstraD(int s){
    priority_queue <pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0,s});
    distD[s]=0;
    while(!pq.empty()){
        int u = pq.top().second;
        long long weight = pq.top().first;
        pq.pop();
        if(weight > distD[u]){
            continue; 
        }
        for(auto [v,w]:adj[u]){
            long long d = distD[u]+w;
            if(d < distD[v]){
                distD[v] = d;
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
        int n,r;
        cin>>n>>r;

        vector <tuple<int,int,int>> node;
        for(int i=1; i<=r; i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
            node.push_back(make_tuple(u,v,w));
        }

        dijkstraS(1);
        dijkstraD(n);

        long long shortest = distS[n];
        long long secShort = INT_MAX;
        for(auto [u,v,w]:node){
            long long dist = min(distS[u]+w+distD[v], distS[v]+w+distD[u]);
            debug(dist,shortest);
            if(dist==shortest){
                secShort=min(secShort,dist+(w*2));
            }else if(dist>shortest){
                secShort=min(secShort,dist);
            }
            
        }
        cout<<"Case "<<cs<<": "<<secShort<<'\n';
        cs++;

        for(int i=0; i<=n; i++){
            adj[i].clear();
            distS[i]=inf;
            distD[i]=inf;
        }
    }

    return 0;
}

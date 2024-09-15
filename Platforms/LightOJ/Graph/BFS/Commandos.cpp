/**
 *    author:  Mahjabin7
 *    created: 06.09.2024 00:28:40
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

vector <int> adj[100+7];
vector <int> levelS(100+7);
vector <int> levelD(100+7);
vector <bool> visitedS(100+7);
vector <bool> visitedD(100+7);

void bfsS(int s){
    queue <int> q;
    q.push(s);
    visitedS[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visitedS[v]){
                q.push(v);
                visitedS[v]=1;
                levelS[v]=levelS[u]+1;
            }
        }
    }
}

void bfsD(int s){
    queue <int> q;
    q.push(s);
    visitedD[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visitedD[v]){
                q.push(v);
                visitedD[v]=1;
                levelD[v]=levelD[u]+1;
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
        for(int i=0; i<r; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s,d;
        cin>>s>>d;

        bfsS(s);
        bfsD(d);
        int ans=0;
        for(int i=0; i<n; i++){
            ans= max(ans,levelS[i]+levelD[i]);
        }
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;

        for(int i=0; i<n; i++){
            adj[i].clear();
            levelS[i]=0;
            levelD[i]=0;
            visitedS[i]=0;
            visitedD[i]=0;
        }
    }

    return 0;
}

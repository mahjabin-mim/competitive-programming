/**
 *    author:  Mahjabin7
 *    created: 13.09.2024 03:09:00
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 100000+7;
vector <int> val(N,-1);
vector <int> adj[N];
vector <bool> visited(N,false);

int bfs(int s)
{
    long long sum=0;
    int node=0;
    queue <int> q;
    q.push(s);
    visited[s]=1;
    sum+=val[s];
    node++;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                sum+=val[v];
                node++;
            }
        }
    }

    long long ans=sum/node;
    if(sum%node!=0){
        ans=-1;
    }

    return ans;
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

        for(int i=1; i<=n; i++){
            cin>>val[i];
        }

        for(int i=1; i<=m; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        
        set <int> st;
        bool flag=true;
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                long long ans=bfs(i);
                if(ans<0){
                    flag=false;
                    break;
                }
                st.insert(ans);
            }
        }

        cout<<"Case "<<cs<<": ";
        cs++;
        if(flag && st.size()==1){
            cout<<"Yes"<<'\n';
        }else{
            cout<<"No"<<'\n';
        }

        for(int i=0; i<N; i++){
            adj[i].clear();
            val[i]=-1;
            visited[i]=false;
        }
    }
 
    return 0;
}

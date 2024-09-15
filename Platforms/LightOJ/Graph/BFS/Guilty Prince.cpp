/**
 *    author:  Mahjabin7
 *    created: 09.09.2024 14:46:37
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
vector <int> adj[1000];

int bfs(int s)
{
    vector <int> visited(1000);
    queue <int> q;
    q.push(s);
    visited[s]=1;
    int ans=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!visited[v]){
                q.push(v);
                visited[v]=1;
                ans++;
            }
        }
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

        int arr[m+1][n+1];
        int x,y,num=1;
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                char c;
                cin>>c;
                if(c=='.' || c=='@'){
                    arr[i][j]=num;
                    num++;
                    if(c=='@'){
                        x=i;
                        y=j;
                    }
                }else{
                    arr[i][j]=-1;
                }
                
            }
        }

        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                int u=arr[i][j];
    
                if(i!=1 && u>0 && arr[i-1][j]>0){
                    adj[u].push_back(arr[i-1][j]);
                }
                if(i!=m && u>0 && arr[i+1][j]>0){
                    adj[u].push_back(arr[i+1][j]);
                }
                if(j!=1 && u>0 && arr[i][j-1]>0){
                    adj[u].push_back(arr[i][j-1]);
                }
                if(j!=n && u>0 && arr[i][j+1]>0){
                    adj[u].push_back(arr[i][j+1]);
                }
            }
        }
        
        int s=(arr[x][y]);
        cout<<"Case "<<cs<<": "<<bfs(s)<<endl;
        cs++;
       
        for(int i=0; i<1000; i++){
            adj[i].clear();
        }
    }
 
    return 0;
}

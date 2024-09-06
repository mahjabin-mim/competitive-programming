/**
 *    author:  Mahjabin7
 *    created: 04.09.2024 02:31:28
**/
//https://codeforces.com/contest/2008/problem/D
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() 
{    
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }

        string s;
        cin>>s;
       
        vector<int> visited(n+1);
        vector<int> parent[n+1];
        vector<int> ans(n+1);
        for(int i=1; i<=n; i++){
            if(visited[i]==0){
                visited[i]=1;
                int black=0;
                int j=i;
                while(true){
                    parent[i].push_back(v[j]);
                    visited[v[j]]=true;
                    if(s[j-1]=='0'){
                        black++;
                    }
                    j=v[j];
                    if(j==i){
                        break;
                    }
                }
                
                for(auto z:parent[i]){
                    ans[z]=black;
                }
            }
        }

        for(int i=1; i<=n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

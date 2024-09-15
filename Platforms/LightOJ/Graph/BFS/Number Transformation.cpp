/**
 *    author:  Mahjabin7
 *    created: 06.09.2024 12:40:37
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N=100000+7;
set <int> st;
vector <int> level(N);
vector <bool> visited(N);

bool isPrime(int n)
{
    bool prime=true;
    if(n<=1) {
        prime=false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

void primFactor(int n)
{
    st.clear();
    while(n%2==0){
        n/=2;
        st.insert(2);
    }
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            n/=i;
            st.insert(i);
        }
    }
    if(n>2){
        st.insert(n);
    }
}

int bfs(int s,int t)
{
    queue <int> q;
    q.push(s);
    visited[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        primFactor(u);
        for(auto v:st){
            v+=u;
            if(!visited[v] && v<=t){
                if(v==t){
                    return level[u]+1;
                }
                q.push(v);
                visited[v]=1;
                level[v]=level[u]+1;
            }
        }
    }

    return -1;
}

int main() 
{    
    optimized
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        int s,t;
        cin>>s>>t;

        if(s==t){
            cout<<"Case "<<cs<<": "<<0<<endl;
        }else if(isPrime(s)){
            cout<<"Case "<<cs<<": "<<-1<<endl;
        }else{
            cout<<"Case "<<cs<<": "<<bfs(s,t)<<endl;
            level.assign(N,0);
            visited.assign(N,false);
        }
        cs++;
    }
 
    return 0;
}
   
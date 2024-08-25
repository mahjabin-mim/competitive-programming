/*
Author: Mahjabin7
Date: 2/06/24
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

vector<pair<int, int>> arr[100000];
int vis[100000];
int max1[100000];
int max2[100000];
int mx=0;
int weight=0;

int findDiameter(int node)
{
    vis[node]=1;
    for(auto child:arr[node]){
        if(vis[child.first]!=1){
            weight = child.second + findDiameter(child.first);
            if(weight >= max1[node]){
                max2[node] = max1[node];
                max1[node] = weight;
            }else if(weight > max2[node]){
                max2[node] = weight;
            }
        }
    }
    mx = max(max1[node]+max2[node], mx);
    return max1[node];
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

        mx=0;
        for (int i=0; i<n; i++) {
            arr[i].clear();  
            vis[i] = 0;     
            max1[i] = 0;   
            max2[i] = 0;   
        }

        for(int i=0; i<n-1; i++){
            int v,e,c;
            cin>>v>>e>>c;
            arr[v].push_back(make_pair(e,c));
            arr[e].push_back(make_pair(v,c));
        }

        findDiameter(0);
        cout<<"Case "<<cs<<": "<<mx<<endl;
        cs++;
    }

    return 0;
}

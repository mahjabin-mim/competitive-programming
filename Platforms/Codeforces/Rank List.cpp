/*
Author: Mahjabin7
Date: 30/4/24
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

int main() 
{
    optimized
    int n,k;
    cin>>n>>k;

    vector< pair<int, int> > v;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        v[i].first*=-1;
    }
 
    sort(v.begin(), v.end());
    int ans=0;
    for(auto i:v){
        if(i == v[k-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
 
    return 0;
}
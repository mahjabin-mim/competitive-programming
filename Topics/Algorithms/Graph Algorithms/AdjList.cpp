/*
Author: Mahjabin7
Date: 31/05/24
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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector <int> arr[n+1];
        for(int i=0; i<n-1; i++){
            int v,e;
            cin>>v>>e;
            arr[v].push_back(e);
            arr[e].push_back(v);
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<arr[i].size(); j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

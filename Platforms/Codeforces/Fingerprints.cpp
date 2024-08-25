/*
Author: Mahjabin7
Date: 19/3/24
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
    int n,m;
    cin>>n>>m;
 
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int b[m];
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 13/3/24
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
    int n; 
    cin>>n;
    int a[n+1], b[30005];
    int mx = 0;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[a[i]]=1;
        mx=max(a[i],mx);
    }
 
    for (int i=1; i<=mx+1; i++){
        if (b[i]==0) {
            cout<<i<<endl; 
            break;
        }
    }
    
    return 0;
}
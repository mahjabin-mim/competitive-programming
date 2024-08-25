/*
Author: Mahjabin7
Date: 22/05/24
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
    long long t;
    cin>>t;
    long long cs=1;
    while(t--){ 
        long long n,m;
        cin>>n>>m;
        
        long long ans = (n/2)*m;
        cout<<"Case "<<cs<<": "<<ans<<"\n";
        cs++;
    }

    return 0;
}
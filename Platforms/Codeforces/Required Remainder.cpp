/*
Author: Mahjabin7
Date: 9/4/24
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
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;

        long long xx=(n-y)/x;
        long long k=xx*x+y;
        cout<<k<<endl;
    }
    
    return 0;
}
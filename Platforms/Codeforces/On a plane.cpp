/*
Author: Mahjabin7
Date: 23/4/24
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

    double ans=0;
    for(int i=0; i<n; i++){
        double x,y;
        cin>>x>>y;
        ans=ans+y;
    }
    cout.precision(2);
    cout<<fixed<<(5+0.+ans/n);

    return 0;
}
/*
Author: Mahjabin7
Date: 6/4/24
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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    int fee=0;
    if((x1<0 && x2>0) || (x1>0 && x2<0)){
        fee++;
    }else if((y1<0 && y2>0) || (y1>0 && y2<0)){
        fee++;
    }
    cout<<fee<<endl;
    
    return 0;
}
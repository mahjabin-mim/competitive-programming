/*
Author: Mahjabin7
Date: 18/3/24
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
    int y,w;
    cin>>y>>w;

    int mx=max(y,w);
    mx=6-mx;

    int x=6;
    mx++;
    if(mx==6){
        mx/=6;
        x/=6;
    }else if(mx==4){
        mx/=2;
        x/=2;
    }else if(mx==3){
        mx/=3;
        x/=3;
    }else if(mx==2){
        mx/=2;
        x/=2;
    }
    cout<<mx<<"/"<<x;
    
    return 0;
}
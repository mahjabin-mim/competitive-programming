/*
Author: Mahjabin7
Date: 2/3/24
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
    int x,y;
    cin>>x>>y;
    
    int sum=x+y;
    if(x%2==0){
        x/=2;
    }else{
        x=(x/2)+1;
    }

    cout<<sum<<" "<<x<<endl;
    
    return 0;
}
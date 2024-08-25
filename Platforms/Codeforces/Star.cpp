/*
Author: Mahjabin7
Date: 17/4/24
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
    int a,res=1,s=0;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        s+=12;res+=s;
    }
    cout<<res;
    
    return 0;
}
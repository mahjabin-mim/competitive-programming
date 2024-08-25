/*
Author: Mahjabin7
Date: 10/4/24
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
    long long n;
    cin>>n;
    long long count=0;
    for(long long i=1; i<=n; i*=10){
        count+=(n-i+1);
    }
    cout<<count<<endl;
    
    return 0;
}
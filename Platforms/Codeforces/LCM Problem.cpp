/*
Author: Mahjabin7
Date: 13/4/24
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
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;

        if(2*l>r){
            cout<<-1<<' '<<-1<<'\n';
        }else{
            cout<<l<<' '<<2*l<<'\n';
        }
    }
    
    return 0;
}
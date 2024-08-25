/*
Author: Mahjabin7
Date: 23/3/24
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
 
    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<"I hate ";
        }else{
            cout<<"I love ";
        }

        if(i!=(n-1)){
            cout<<"that ";
        }else{
            cout<<"it ";
        }
    }
    
    return 0;
}
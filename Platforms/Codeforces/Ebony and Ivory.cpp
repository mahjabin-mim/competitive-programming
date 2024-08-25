/*
Author: Mahjabin7
Date: 20/3/24
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
    int a,b,c;
    cin>>a>>b>>c;
    int i=0;
    bool flag = false;
    while(i<=c/a){
        if((c-i*a)%b==0){
            flag = true;
        }
        i++;
    }

    if(flag){
        cout << "Yes" <<endl;
    }else{
        cout << "No" <<endl;
    }
    
    return 0;
}
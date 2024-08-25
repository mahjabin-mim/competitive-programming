/*
Author: Mahjabin7
Date: 12/4/24
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
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
 
        long long total = 0;
        if(l1 == l2)
            cout<<l1<<endl;
        else if(l2 > l1){
            if(l2 <= r1){
                cout<<l2<<endl;
            }
            else{
                cout<<l2+l1<<endl;
            }
        }else{
            if(l1 <= r2){
                cout<<l1<<endl;
            }
            else{
                cout<<l1+l2<<endl;
            }
        }
    }
    
    return 0;
}
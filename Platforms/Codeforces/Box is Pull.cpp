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
        int x1, x2,y1,y2;
        cin >> x1>>y1>>x2>>y2;
 
        if (0 != (x2 - x1) && 0 == (y2 - y1)){
            cout << abs(x2 - x1)<<"\n";
        }else if (0 == (x2 - x1) && 0 != (y2 - y1)){
            cout << abs(y2 - y1) << "\n";
        }else if (0 == (x2 - x1) && 0 == (y2 - y1)){
            cout << 0 << "\n";
        }else{
            cout << abs(x2 - x1) + abs(y2 - y1) + 2<<"\n";
        }
    }
    
    return 0;
}
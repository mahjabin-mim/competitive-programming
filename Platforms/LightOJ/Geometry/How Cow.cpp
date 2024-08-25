/*
Author: Mahjabin7
Date: 22/05/24
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
    int cs=1;
    while(t--){ 
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m;
        cin>>m;
        
        cout<<"Case "<<cs<<":\n";
        for(int i=0; i<m; i++){ 
            int x,y;
            cin>>x>>y; 
            if (x>x1 && x<x2 && y>y1 && y<y2){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
        cs++;
    }

    return 0;
}
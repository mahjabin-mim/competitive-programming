/*
Author: Mahjabin7
Date: 08/08/24
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
        long long w;
        cin>>w;

        if(w%2!=0){
            cout<<"Case "<<cs<<": "<<"Impossible"<<endl;
        }else{
            long long x=0;
            while(w%2==0){
                w/=2;
                x++;
            }
            cout<<"Case "<<cs<<": "<<w<<" "<<pow(2,x)<<endl;
        }
        cs++;
    }
    
    return 0;
}
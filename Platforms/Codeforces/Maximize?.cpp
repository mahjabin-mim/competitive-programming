/*
Author: Mahjabin7
Date: 02/05/24
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
        int x;
        cin>>x;

        int ans=0;
        int y=1;
        for(int i=1; i<x; i++){
            int j = __gcd(i,x);
            j+=i;
            if(ans<j){
                ans=j;
                y=i;
            }
        }
        cout<<y<<endl;
    }
 
    return 0;
}
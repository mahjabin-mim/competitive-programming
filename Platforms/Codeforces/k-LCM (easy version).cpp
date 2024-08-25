/*
Author: Mahjabin7
Date: 17/3/24
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
        long long n,k;
        cin>>n>>k;
        if(n%2 == 0){
            if((n/2)%2 == 0){
                cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
            }else{
                cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
            }
        }else{
            cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        }
    }
    
    return 0;
}
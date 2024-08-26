/*
Author: Mahjabin7
Date: 25/4/24
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

signed main() 
{
    optimized
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int flag=0;
    for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])>1){
            flag=1;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
 

    return 0;
}
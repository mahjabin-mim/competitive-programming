/*
Author: Mahjabin7
Date: 13/3/24
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
        long long n;
        cin>>n;

        long long arr[n];
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }

        long long ans=arr[0];
        for(long long i=1; i<n; i++){
            ans=ans&arr[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
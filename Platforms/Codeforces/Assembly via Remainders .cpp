/*
Author: Mahjabin7
Date: 07/05/24
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
        int n;
        cin>>n;

        int arr[n];
        int mx=0;
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            mx=max(mx,arr[i]);
        }

        long long sum=mx+1;
        cout<<sum<<" ";
        for(int i=0; i<n-1; i++){
            sum+=arr[i];
            cout<<sum<<" ";
        }
        cout<<endl;  
    }
 
    return 0;
}
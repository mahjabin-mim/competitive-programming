/*
Author: Mahjabin7
Date: 16/4/24
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
    int n,m,k;
    cin>>n>>m>>k;
 
    int arr[m+1];
    for(int i=1; i<=m; i++){
        arr[i]=k;
    }
 
    for (int i=0; i<n; i++){
        int r,c;
        cin>>r>>c;
        if(arr[r] > c){
            arr[r]=c;
        }
    }
 
    int sum=0;
    for (int i=1; i<=m; i++){
        sum += arr[i];
    }
 
    if(sum > k){
        sum=k;
    }
 
    cout<<sum<<endl;
    
    return 0;
}
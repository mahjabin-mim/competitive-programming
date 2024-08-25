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
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    if(k>0){
        if(k!=n && arr[k]==arr[k-1]){
            cout<<-1<<endl;
        }
        else{
            cout<<arr[k-1]<<endl;
        }
    }
    else{
        if(arr[0]-1 != 0){
            cout<<arr[0]-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}
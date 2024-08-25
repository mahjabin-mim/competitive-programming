/*
Author: Mahjabin7
Date: 7/4/24
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
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
                arr[j]=arr[j]+1;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}
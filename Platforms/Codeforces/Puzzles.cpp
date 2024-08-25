/*
Author: Mahjabin7
Date: 6/3/24
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
    int n,m;
    cin >> n >> m;
 
    int arr1[m], arr2[m-n+1];
    for(int i=0; i<m; i++){
       cin >> arr1[i];
    }
    
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if (arr1[j]<arr1[i]){
                int t = arr1[j];
                arr1[j] = arr1[i];
                arr1[i] = t;
            }
        }
    }
 
    int ct = 0;
    for(int i=0; (i+n-1)< m; i++){
        arr2[i] = abs(arr1[i] - arr1[i+n-1]);
        if(arr2[ct]>arr2[i]){
            ct=i;
        }
    }
    cout << arr2[ct] <<endl;
    
    return 0;
}
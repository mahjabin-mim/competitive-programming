/*
Author: Mahjabin7
Date: 11/4/24
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
        long long n,m;
        cin>>n>>m;

        string arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int k=n; k>=0; k--){
            for(int i=n-2; i>=0; i--){
                for(int j=0; j<m; j++){
                    if(arr[i][j] == '*' && arr[i+1][j] == '.'){
                        arr[i][j] = '.';
                        arr[i+1][j] = '*';
                    }
                }
            }
        }
 
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }
    }
    
    return 0;
}
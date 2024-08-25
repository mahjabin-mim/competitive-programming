/*
Author: Mahjabin7
Date: 29/4/24
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
    while (t--) {
        int n;
        cin>>n;

        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }

        int count=0;
        for(int i=1; i<=n; i++) {
            int x=arr[i];
            if (arr[x] == i) {
                count++;
            }
        }

        if(count>=2){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }  
    }
 
    return 0;
}
/*
Author: Mahjabin7
Date: 15/4/24
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

        long long sum=0;
        for(int i=0; i<n-1; i++) {
          int a;
          cin>>a;
          sum+=a;
        }
        sum*=(-1);
        cout<<sum<<endl;
    }
    
    return 0;
}
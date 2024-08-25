/*
Author: Mahjabin7
Date: 3/3/24
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
        int count=2,p=0;
        for(int i=1;i<=n;i++){
            count++;
            if(i%3==0){
                count++;
                p++;
                if(p%2==0)
                    count++;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
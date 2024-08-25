/*
Author: Mahjabin7
Date: 2/4/24
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
        
        for(long long i=1;i<=n;i++){
            for(long long j=1;j<=m;j++){
                long long pp=i%4,qq=j%4;
                if(pp<=1){
                    if(qq<=1){
                        cout<<0<<" ";
                    }else {
                        cout<<1<<" ";
                    }
                }else{
                    if(qq<=1){
                        cout<<1<<" ";
                    }else{
                        cout<<0<<" ";
                    }
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}
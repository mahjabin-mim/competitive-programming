/*
Author: Mahjabin7
Date: 31/08/24
*/
//https://lightoj.com/problem/trailing-zeroes-iii
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

long long TrailingZeros(long long n){
    long long totalZero=0;
    long long i=5;
    while(n/i>0){
        totalZero+=(n/i);
        i*=5;
    }
    return totalZero; 
}

int main() 
{    
    optimized
    int t;
    cin>>t;
    int cs=1;
    while(t--){
        long long q;
        cin>>q;

        //lower bound
        long long ans=-1;
        long long l=1;
        long long r=1e9;
        while(l<=r){
            long long mid=(l+r)/2;
            if(TrailingZeros(mid)>=q){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }

        cout<<"Case "<<cs<<": ";
        if(TrailingZeros(ans)!=q){
            cout<<"impossible"<<endl;
        }else{
            cout<<ans<<endl;
        }
        cs++;
    }

    return 0;
}
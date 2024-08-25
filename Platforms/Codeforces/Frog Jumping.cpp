/*
Author: Mahjabin7
Date: 12/4/24
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
        long long a,b,n;
        cin>>a>>b>>n;

        long long even=0;
        long long odd=0;
        if(n%2==0){
            even=(n/2);
            odd=(n/2);
        }else{
            odd=(n/2);
            even=(n/2)+1;
        }

        long long sum=0;
        sum+=(a*even);
        sum+=-(b*odd);
        cout<<sum<<endl;
    }
    
    return 0;
}
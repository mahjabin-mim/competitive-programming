/*
Author: Mahjabin7
Date: 14/3/24
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
    long long n,a,b,c;
    cin>>n>>a>>b>>c;

    long long ans=0;
    for(long long i=0; i<=n; i++){
        for(long long j=0; j<=n; j++){
            long long rem=n-(a*i+b*j);
            if(rem>=0 and rem%c==0){
                ans=max(ans,(i+j+rem/c));
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
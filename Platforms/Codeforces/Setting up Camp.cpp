/*
Author: Mahjabin7
Date: 19/3/24
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
        int a,b,c;
        cin>>a>>b>>c;

        long long ans;
        if(b%3!=0 && (b%3)+c<3){
            ans=-1;
        }else{
            ans=a;
            ans+=(b+c)/3;
            if((b+c)%3!=0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
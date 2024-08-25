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
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        map <long long,long long> mp;
        for(long long i=1; i<=n; i++){
            long long x;
            cin>>x;
            mp[x-i]++;
        }

        long long ans=0;
        for(auto i:mp){
            ans+=(i.second*(i.second-1))/2;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
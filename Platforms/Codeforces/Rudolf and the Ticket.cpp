/*
Author: Mahjabin7
Date: 12/3/24
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
        int n,m,k;
        cin>>n>>m>>k;

        int b[n];
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int c[m];
        for(int i=0; i<m; i++){
            cin>>c[i];
        }

        long long ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(b[i]+c[j]<=k){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
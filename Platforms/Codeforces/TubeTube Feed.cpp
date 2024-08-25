/*
Author: Mahjabin7
Date: 26/4/24
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
        int n,q;
        cin>>n>>q;

        int sec[n];
        vector <int> v;
        for(int i=0; i<n; i++){
            cin>>sec[i];
            if(sec[i]<=q){
                v.push_back(i);
            }
            q--;
        }

        int val[n];
        for(int i=0; i<n; i++){
            cin>>val[i];
        }

        int ans=-1;
        int mx=-1;
        for(auto i:v){
            if(val[i]>mx){
                mx=val[i];
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
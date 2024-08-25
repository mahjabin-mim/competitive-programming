/*
Author: Mahjabin7
Date: 16/4/24
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
    char l,r,u,d;
    cin>>l>>r>>u>>d;
     
    int ans=max(abs(l-u),abs(r-d));
    cout<<ans<<endl;
    for(int i=0; i<ans; i++){
        if(l<u){
            cout<<'R'; 
            l++;
        }else if(l>u){
            cout<<'L'; 
            l--; 
        }

        if(r<d){
            cout<<'U'; 
            r++;
        }
        else if(r>d){
            cout<<'D'; 
            r--;
        }
        cout<<endl;
    }
    
    return 0;
}
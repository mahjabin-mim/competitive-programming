/*
Author: Mahjabin7
Date: 10/4/24
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
    int n;
    cin>>n;
     
    string s;
    cin>>s;
     
    int o=0, z=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
           o++;
        }else if(s[i]=='0'){
           z++;
        }
    }
    
    if(o>0){
        cout<<'1';
        for(int i=0; i<z; i++){
            cout<<'0';
     
        }
    }else if(o<=0){
        cout<<s<<endl;
    }
    
    return 0;
}
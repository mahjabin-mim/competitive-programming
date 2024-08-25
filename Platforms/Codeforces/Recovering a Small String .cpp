/*
Author: Mahjabin7
Date: 29/3/24
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
        int n;
        cin>>n;
        bool flag=false;
        for(int i=0;i<26 && flag==false;i++){
            for(int j=0;j<26 && flag==false;j++){
                for(int k=0;k<26 && flag==false;k++){
                    if(i+j+k+3==n){
                        cout<<char('a'+i)<<char('a'+j)<<char('a'+k)<<endl;
                        flag=true;
                    }
                }
            }
        }
    }
    
    return 0;
}
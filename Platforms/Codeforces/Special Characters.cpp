/*
Author: Mahjabin7
Date: 15/3/24
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

        if(n%2==0){
            cout<<"YES"<<endl;
            string s="";
            char c='A';
            for(int i=0; i<(n/2); i++){
                s+=c;
                s+=c;
                c++;
            }
            cout<<s<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
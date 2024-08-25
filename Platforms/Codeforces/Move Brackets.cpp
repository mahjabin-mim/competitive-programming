/*
Author: Mahjabin7
Date: 9/4/24
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
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int m=0,x=0;
        for(int i =0 ; i<n ; i++){
            if(x<0){
                m++;
                x=0;
            }
            if(s[i]=='('){
                x++;
            }
            if(s[i]==')'){
                x--;
            }
        }
        cout<<m<<endl;
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 28/3/24
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

    int cs=1;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count=0;
        for(int i=1; i<n-1; i++){
            if(s[i-1]=='.' && s[i+1]=='.'){
                s[i-1]='#';
                s[i+1]='#';
                s[i]='#';
                count++;
            }
        }

        for(int i=0; i<n-1; i++){
            if(s[i]=='.' && s[i+1]=='.'){
                s[i+1]='#';
                s[i]='#';
                count++;
            }
        }

        for(auto i:s){
            if(i=='.'){
                count++;
            }
        }
        cout<<"Case "<<cs<<": "<<count<<endl;
        cs++;
    }
    
    return 0;
}
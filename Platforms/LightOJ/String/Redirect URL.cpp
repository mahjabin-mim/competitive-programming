/*
Author: Mahjabin7
Date: 3/3/24
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
        string s;
        cin>>s;

        string ans="";
        for(int i=0; i<s.length(); i++){
            if(i==4 && s[i]!='s'){
                ans+='s';
                ans+=':';
            }else{
                ans+=s[i];
            }
        }
        cout<<"Case "<<cs<<": ";
        cout<<ans<<endl;
        cs++;
    }
    
    return 0;
}
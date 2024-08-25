/*
Author: Mahjabin7
Date: 10/05/24
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
        string s;
        cin>>s;

        int ans=1;
        int count=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='1' && s[i+1]=='0'){
                ans++;
            }
            if(s[i]=='0' && s[i+1]=='1'){
                count++;
            }
        }
        
        if(count>1){
            ans+=(count-1);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
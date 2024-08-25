/*
Author: Mahjabin7
Date: 29/4/24
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
        string s;
        cin>>s;

        int z=0, o=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                z++;
            }else{
                o++;
            }
        }

        long long ans=0;
        if(z==0 || o==0){
            ans=0;
        }else{
            o=0;
            for(int i=0; i<s.length(); i++){
                if(s[i]=='1'){
                    o++;
                }else if(o>0){
                    ans+=(o+1);
                }
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
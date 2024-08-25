/*
Author: Mahjabin7
Date: 10/3/24
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

        int ab=0, ba=0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='a' && s[i+1]=='b'){
                ab++;
            }else if(s[i]=='b' && s[i+1]=='a'){
                ba++;
            }
        }
        if(ab==ba){
            cout<<s<<endl;
        }else{
            s[0]=s[s.length()-1];
            cout<<s<<endl;
        }
    }
    
    return 0;
}
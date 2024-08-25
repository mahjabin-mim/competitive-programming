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

        set <int> st;
        for(int i=0; i<s.length(); i++){
            st.insert(s[i]);
        }

        if(st.size()>1){
            cout<<"YES"<<endl;
            for(int i=0; i<s.length()-1; i++){
                char c=s[i];
                char d=s[i+1];
                s[i]=d;
                s[i+1]=c;
            }
            cout<<s<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
 
    return 0;
}
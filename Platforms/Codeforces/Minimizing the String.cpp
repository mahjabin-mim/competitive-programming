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
    long long n;
    cin>>n;

    string s;
    cin>>s;

    long long pos=0;
    char c;
    for(long long i=1;i<s.size();i++){
        if(s[i]<s[i-1]){
            pos=i;
            c=s[i-1];
            break;
        }
    }
    if(pos==0){
        s.pop_back();
        cout<<s<<endl;
    }
    else{
        string ans="";
        for(long long i=0;i<pos-1;i++){
            ans+=s[i];
        }
        for(long long i=pos;i<s.size();i++){
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 12/3/24
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
    long long n=0;
    long long ans=0;
    string s;
    while(getline(cin,s)){
        if(s[0]=='+'){
            n++;
        }else if(s[0]=='-'){
            n--;
        }else{
            int l=0;
            while(s[l++]!=':');
            l=(int)s.size()-l;
            ans+=n*l;
        }
    }
    cout<<ans<<endl;

    return 0;
}
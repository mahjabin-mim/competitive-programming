/*
Author: Mahjabin7
Date: 27/3/24
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
    string s;
    cin>>s;

    bool flag = false;
    for (int i=0; i<s.size(); i++){
        if (s.substr(i,3) != "WUB"){
            cout<<s[i];
            flag = true;
        }else{
            if (flag){
                cout<<" ";
            }
            i+=2;
            flag=false;
        }
    }
    
    return 0;
}
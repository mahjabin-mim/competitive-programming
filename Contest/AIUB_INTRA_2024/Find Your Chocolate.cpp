/*
Author: Mahjabin7
Date: 2/3/24
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

    map <char,int> mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }

    bool flag=true;
    for(int i=0; i<7; i++){
        if(mp['c']<2){
            flag=false;
            break;
        }if(mp['o']<2){
            flag=false;
            break;
        }if(mp['h']<1){
            flag=false;
            break;
        }if(mp['a']<1){
            flag=false;
            break;
        }if(mp['l']<1){
            flag=false;
            break;
        }if(mp['t']<1){
            flag=false;
            break;
        }if(mp['e']<1){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    return 0;
}
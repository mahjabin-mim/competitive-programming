/*
Author: Mahjabin7
Date: 11/05/24
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
    long long n,a,c=0;
    cin>>n;
    set<long long>s;
    for(int i=0; i<n; i++){
            cin>>a;
        s.insert(a);
    }

    for(auto x:s){
        c++;
        if(c==2){
            cout<<x;
            break;
        }
     
    }
    if(c==1){
        cout<<"NO"<<endl;
    }
 
    return 0;
}
/*
Author: Mahjabin7
Date: 26/08/24
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
    int n;
    cin>>n;

    bool prime=true;
    if(n==0 || n==1){
        prime=false;
    }

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            prime=false;
        }
    }

    if(prime){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    
    return 0;
}
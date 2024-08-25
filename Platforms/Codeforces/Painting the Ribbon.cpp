/*
Author: Mahjabin7
Date: 05/05/24
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
        long long n,m,k;
        cin>>n>>m>>k;

        if(n%m==0){
          long long x = (n/m)*(m-1);
          if(x<=k){
            cout<<"NO"<<endl;;
          }else{
            cout<<"YES"<<endl;;
          }
        }else{
          long long x = (n/m)*(m-1) +(n%m)-1;
          if(x<=k){
            cout<<"NO"<<endl;
          }else{
            cout<<"YES"<<endl;
          }
 
        }
    }
 
    return 0;
}
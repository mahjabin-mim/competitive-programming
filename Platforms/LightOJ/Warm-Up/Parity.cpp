/*
Author: Mahjabin7
Date: 19/05/24
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
    int cs=1;
    while(t--){
        int n;
        cin>>n;

        int count=0;
        for(int i=31; i>=0; i--){
            long long x=pow(2,i);
            if(x<=n){
                count++;
                n-=x;
            }
            if(n==0){
                break;
            }
        }

        if(count%2==0){
            cout<<"Case "<<cs<<": even"<<endl;
        }else{
            cout<<"Case "<<cs<<": odd"<<endl;
        }
        cs++;
    }
 
    return 0;
}
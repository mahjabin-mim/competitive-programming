/*
Author: Mahjabin7
Date: 08/08/24
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
        long long w;
        cin>>w;

        if(w%2!=0){
            cout<<"Case "<<cs<<": "<<"Impossible"<<endl;
        }else if(((w/2)%2)!=0){
            cout<<"Case "<<cs<<": "<<w/2<<" "<<2<<endl;
        }else{
            for(long long i=4; i<=(w/2); i+=2){
                if(w%i==0 && (w/i)%2!=0){
                    cout<<"Case "<<cs<<": "<<w/i<<" "<<i<<endl;
                    break;
                }
            }
        }
        cs++;
    }
    
    return 0;
}
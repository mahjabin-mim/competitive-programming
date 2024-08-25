/*
Author: Mahjabin7
Date: 28/3/24
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
        int a,b;
        char c;
        cin>>a>>c>>b;

        if(a>=12){
            if((a-12)<10 && a!=12){
                cout<<"0";
            }
            if(a==12){
                cout<<a<<c;
            }else{
                 cout<<a-12<<c;
            }
            if(b<10){
                cout<<"0";
            }
            cout<<b<<" PM"<<endl;
        }else{
            if(a==0){
                a=12;
            }
            if(a<10){
                cout<<"0";
            }
            cout<<a<<c;
            if(b<10){
                cout<<"0";
            }
            cout<<b<<" AM"<<endl;
        }
        
    }
    
    return 0;
}
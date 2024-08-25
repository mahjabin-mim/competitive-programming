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
    int door=9, ent_ext=10;
    while(t--){
        int myPos, liftPos;
        cin>>myPos>>liftPos;
        
        int timee=0;
        if(myPos>liftPos){
            for(int i=liftPos; i<myPos; i++){
                timee+=4;
            }
            for(int j=myPos; j>0; j--){
                timee+=4;
            }
            cout<<"Case "<<cs<<": "<<timee+door+ent_ext<<endl;
        }
        else if(myPos<=liftPos){
                for(int i=liftPos; i>0; i--){
                    timee+=4;
                }
                cout<<"Case "<<cs<<": "<<timee+door+ent_ext<<endl;
        }
        cs++;
    }
 
    return 0;
}
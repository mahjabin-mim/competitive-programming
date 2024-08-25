/*
Author: Mahjabin7
Date: 08/05/24
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
        long long d,x,y,res,cnt;
        cin>>d;
 
        for(int i=d+1;;i++){
            x=i;
            cnt=0;
 
            for(int j=2;j*j<=x;j++){
                if(x%j==0){
                    cnt++;
                }
            }
 
            if(cnt==0)
                break;
        }
 
        for(int i=d+x;;i++){
            y=i;
            cnt=0;
            for(int j=2;j*j<=y;j++){
                if(y%j==0){
                    cnt++;
                }
            }
 
            if(cnt==0)
                break;
        }
 
        res=x*y;
        cout<<res<<endl;
    }
 
    return 0;
}
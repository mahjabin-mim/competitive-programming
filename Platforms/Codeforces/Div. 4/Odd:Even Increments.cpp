/*
Author: Mahjabin7
Date: 7/3/24
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
        int n;
        cin>>n;

        vector <int> e;
        vector <int> o;
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            if(i%2==0){
                e.push_back(x);
            }else{
                o.push_back(x);
            }
        }

        bool even1=false, odd1=false;
        for(auto i:e){
            if(i%2==0){
                even1=true;
            }else{
                odd1=true;
            }
        }

        bool even2=false, odd2=false;
        for(auto i:o){
            if(i%2==0){
                even2=true;
            }else{
                odd2=true;
            }
        }

        if((even1 && odd1) || (even2 && odd2)){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
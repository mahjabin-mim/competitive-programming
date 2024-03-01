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
    int t;
    cin>>t;

    deque <int> dq;
    while(t--){
        int n;
        cin>>n;

        if(n==1){
            int x,y;
            cin>>x>>y;
            for(int i=0; i<y; i++){
                dq.push_front(x);
            }
        }else if(n==2){
            int x,y;
            cin>>x>>y;
            for(int i=0; i<y; i++){
                dq.push_back(x);
            }
        }else if(n==3){
            int y;
            cin>>y;
            for(int i=0; i<y; i++){
                dq.pop_front();
            }
        }else if(n==4){
            int y;
            cin>>y;
            for(int i=0; i<y; i++){
                dq.pop_back();
            }
        }else if(n==5){
            if(dq.empty()){
                cout<<-1<<endl;
            }else{
                cout<<dq.front()<<endl;
            }  
        }else if(n==6){
            if(dq.empty()){
                cout<<-1<<endl;
            }else{
                cout<<dq.back()<<endl;
            }  
        }

        int a = dq.at(0); //returns index
        int b = dq[0]; //returns index
        int c = dq.size(); //returns size;
    }
    
    return 0;
}
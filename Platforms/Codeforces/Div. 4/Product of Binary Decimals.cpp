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
        int n;
        cin>>n;

        bool flag=true;
        string s=to_string(n);
        for(int i=0; i<s.length(); i++){
            if(s[i]!='0' && s[i]!='1'){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            // if(n%11==0){
            //     flag=true;
            //     int a=n/11;
            //     string s1=to_string(a);
            //     debug(s1);
            //     for(int i=0; i<s1.length(); i++){
            //         if(s1[i]!='0' && s1[i]!='1'){
            //             flag=false;
            //             break;
            //         }
            //     }
            //     if(flag){
            //         cout<<"YES"<<endl;
            //     }else{
            //         cout<<"NO"<<endl;
            //     }
            // }else{
            //     cout<<"NO"<<endl;
            // }
            
            while(n%10==0){
                n/=10;
            }
            while(n%11==0){
                n/=11;
            }
            while(n%101==0){
                n/=101;
            }
            while(n%100==0){
                n/=100;
            }
            while(n%111==0){
                n/=111;
            }

            flag=true;
            string str=to_string(n);
            for(int i=0; i<str.length(); i++){
                if(str[i]!='0' && str[i]!='1'){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 4/3/24
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
        int n,k;
        cin>>n>>k;

        if(n<k){
            cout<<"NO"<<endl;
        }else if(k==1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }else if(n%k==0){
            cout<<"YES"<<endl;
            for(int i=0; i<k; i++){
                cout<<n/k<<" ";
            }
            cout<<endl;
        }else if(n%2==0){
            if(k%2==0){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }else if(k*2<=n){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<2<<" ";
                }
                cout<<n-(k-1)*2<<endl;
            }else{
                cout<<"NO"<<endl;
            } 
        }else{
            if(k%2==1){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }
            else{
                cout<<"NO"<<endl;
            } 
        }  
    }
    
    return 0;
}
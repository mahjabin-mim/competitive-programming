/*
Author: Mahjabin7
Date: 13/3/24
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

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=1; i<n-1; i++){
            int x=arr[i-1]*2;
            if(arr[i]>=x && arr[i+1]>=arr[i-1]){
                arr[i]-=x;
                arr[i+1]-=arr[i-1];
                arr[i-1]=0;
            }
        }
        
        bool flag=true;
        for(auto i:arr){
            if(i!=0){
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
    
    return 0;
}
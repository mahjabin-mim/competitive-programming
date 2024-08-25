/*
Author: Mahjabin7
Date: 8/4/24
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
        int n,c,d;
        cin>>n>>c>>d;

        int arr[n*n];
        for(int i=0; i<n*n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+(n*n));

        int ans[n*n];
        ans[0]=arr[0];
        for(int i=1; i<n*n; i++){
            if(i<n){
                ans[i]=ans[i-1]+c;
            }else{
                ans[i]=ans[i-n]+d;
            }
        }
        sort(ans,ans+(n*n));

        bool flag=true;
        for(int i=0; i<n*n; i++){
            if(arr[i]!=ans[i]){
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
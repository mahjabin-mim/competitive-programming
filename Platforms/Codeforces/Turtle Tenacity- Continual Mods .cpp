/*
Author: Mahjabin7
Date: 28/2/24
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
        int mn=INT_MAX;
        map <int,int> mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mn=min(mn,arr[i]);
            mp[arr[i]]++;
        }

        string ans="";
        if(mp[mn]==1){
            ans="YES";
        }else{
            for(int i=0; i<n; i++){
                if(arr[i]%mn!=0 && arr[i]%mn<mn){
                    ans="YES";
                    break;
                }
            }
            if(ans==""){
                ans="NO";
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
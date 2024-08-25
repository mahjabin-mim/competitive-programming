/*
Author: Mahjabin7
Date: 15/3/24
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

        vector <int> v;
        v.push_back(arr[n-1]);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>arr[i+1] && arr[i]>9){
                string s=to_string(arr[i]);
                int x=s[0]-'0';
                int y=s[1]-'0';
                arr[i]=x;
                v.push_back(y);
                v.push_back(x);
            }else{
                v.push_back(arr[i]);
            }
        }

        bool flag=true;
        for(int i=0; i<v.size()-1; i++){
            if(v[i]<v[i+1]){
                flag=false;
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
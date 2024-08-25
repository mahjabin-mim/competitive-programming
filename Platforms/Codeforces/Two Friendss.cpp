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
        long long n;
        cin>>n;

        long long arr[n+1];
        unordered_map<long long,long long>mp1,mp2;
        for(long long i=1;i<=n;i++){
            cin>>arr[i];
            mp1[i]=arr[i];
            mp2[arr[i]]=i;
        }

        long long flag=0;
        for(long long i=1;i<=n;i++){
            if(mp1[i]==mp2[i]){
                flag++;
                break;
            }
        }

        if(flag==1){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
 
    return 0;
}
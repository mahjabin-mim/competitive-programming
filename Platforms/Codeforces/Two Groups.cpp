/*
Author: Mahjabin7
Date: 11/3/24
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
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
     
        long long sum1=0, sum2=0;
        for(int i=1; i<=n; i++){
            if(arr[i]>=0){
                sum1+=arr[i];
            }else sum2+=abs(arr[i]);
        }
        long long ans=abs(sum1-sum2);
        cout<<ans<<endl;
    }
    
    return 0;
}
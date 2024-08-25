/*
Author: Mahjabin7
Date: 27/05/24
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
    int cs=1;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map <int,int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            arr[i]=x;
            mp[abs(x)]++;
        }

        long long sum=0;
        for(int i=n-1; i>=0; i--){
            if(mp[abs(arr[i])] == 1){
                sum+=arr[i];
            }else{
                if(mp[abs(arr[i])] != 0){
                    sum+=arr[i];
                    mp[abs(arr[i])]=0;
                }
            }
        }
        cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;
    }

    return 0;
}

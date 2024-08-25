/*
Author: Mahjabin7
Date: 13/05/24
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

        long long arr[n];
        set <long long> st;
        for(long long i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }

        if(st.size()==1){
            cout<<-1<<endl;
        }else{
            long long ans=n;
            long long count=0;
            for(long long i=n-1; i>=0; i--){
                if(arr[i]==arr[0]){
                    count++;
                }else{
                    ans=min(ans,count);
                    count=0;
                }
            }
            ans=min(ans,count);
            cout<<ans<<endl;
        }
    }
 
    return 0;
}
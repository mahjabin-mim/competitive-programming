/*
Author: Mahjabin7
Date: 23/08/24
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
    int n;
    cin>>n;

    vector <int> v(n+1);
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    sort(v.begin(),v.end());

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;

        //upper bound
        int l=1;
        int r=n;
        int ans=n+1;
        while(l<=r){
            int mid=(l+r)/2;
            if(v[mid]>x){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout<<ans-1<<endl;
    }
    
    return 0;
}

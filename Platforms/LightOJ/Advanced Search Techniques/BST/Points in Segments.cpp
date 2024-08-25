/*
Author: Mahjabin7
Date: 17/08/24
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
        int n,q;
        cin>>n>>q;

        vector<int> v(n+1);
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }

        cout<<"Case "<<cs<<":"<<"\n";
        while(q--){
            int x, y;
            cin>>x>>y;

            //lower bound
            int l=1, r=n;
            int a=n+1;
            while(l <= r){
                int mid=(l+r)/2;
                if(v[mid] >= x){
                    a=mid;
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }

            //upper bound
            l=1; r=n;
            int b=0;
            while(l <= r){
                int mid=(l+r)/2;
                if(v[mid] > y){
                    r=mid-1;
                }else{
                    b=mid;
                    l=mid+1;
                }
            }

            int ans=0;
            if(a <= b) { 
                ans=b-a+1;
            }

            cout<<ans<<endl;
        }
        cs++;
    }

    return 0;
}

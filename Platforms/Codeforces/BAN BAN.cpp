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
        int ans=1;
        int x=n*3;
        if(n%2!=0){
            n++;
        }
        n/=2;
        cout<<n<<endl;;
        for(int i=0;i<n;i++){
            cout<<ans<<" "<<x<<" ";
            ans+=3;x-=3;
        }
        cout<<endl;
    }
    
    return 0;
}
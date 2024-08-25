/*
Author: Mahjabin7
Date: 21/4/24
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

bool f(int &x,int &k)
{
    int temp=x;
    int sum=0;
    while(temp!=0){
        int t=temp%10;
        sum+=t;
        temp/=10;
    }
    return sum%k==0;
}

int main() 
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int x,k;cin>>x>>k;
        int ans=x;
        while(!f(ans,k))
        {
            ans++;
        }
        cout<<ans<<'\n';
    }

    return 0;
}
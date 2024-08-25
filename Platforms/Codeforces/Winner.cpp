/*
Author: Mahjabin7
Date: 24/4/24
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
    int n,m,x;
    cin >> n;

    string s[10000];
    int a[10000];

    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>s[i]>>a[i];
        mp[s[i]]+=a[i];
    }

    int mx=0;
    for(int i=0;i<n;i++){
        mx=max(mp[s[i]],mx);
    }

    map<string,int>mp2;
    string ans;
    for(int i=0;i<n;i++){
        mp2[s[i]]+=a[i];
        if(mp2[s[i]]>=mx&&mp[s[i]]==mx){
            ans=s[i];
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}
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

int p[101];

int main() 
{
    optimized
    int n,m,a,b,i,j,s,f=1;
    cin>>n>>m;
    for (i=0;i<m;i++){
        cin>>a>>b;
        for (j=a;j<=b;j++){
            p[j]+=1;
        }
    }
    for (i=1;i<=n;i++){
        if (p[i]==0 || p[i]>1){
            cout<<i<<" "<<p[i];
            f=0;
            break;
        }
    }
    if (f) cout<<"OK";
 
    return 0;
}
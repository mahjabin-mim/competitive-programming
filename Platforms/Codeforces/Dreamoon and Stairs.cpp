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
    int n,m;
    cin>>n>>m;

    int x=(n+1)/2;
    int ans=((x+m-1)/m)*m;
    if(ans>n){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    } 
    
    return 0;
}
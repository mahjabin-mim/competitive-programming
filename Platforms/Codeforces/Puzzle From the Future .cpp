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
        string a,b="1";
        cin>>a;
        for(long long i=1;i<n;i++){
            int xp=a[i-1]-48;
            int yp=b[i-1]-48;
            int x=a[i]-48;
            int y=1;
            if((xp+yp)!=(x+y)) b+='1';
            else b+='0';
        }
        cout<<b<<endl;
    }
    
    return 0;
}
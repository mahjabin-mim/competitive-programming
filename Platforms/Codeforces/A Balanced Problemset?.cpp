/*
Author: Mahjabin7
Date: 06/05/24
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
        long long x, n; 
        cin >> x >> n;

        long long ans = 1;
        for (long long i = 1; i*i <= x; i++ ){
            if ( x % i == 0 ){
                if ( x/i >= n )
                    ans = max( ans, i );
                if ( n <= i )
                    ans = max( ans, x/i );
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}
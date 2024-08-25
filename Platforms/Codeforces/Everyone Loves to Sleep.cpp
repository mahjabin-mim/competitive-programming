/*
Author: Mahjabin7
Date: 04/05/24
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
        int n, h, m;
        cin >> n >> h >> m;
        int target = h * 60 + m;
        int min_diff = INT_MAX;
        while (n--){
            int hour, minute;
            cin>>hour>>minute;
            int given = hour * 60 + minute;
            if (given < target)
                given += 24 * 60;
            min_diff = min(min_diff, given - target);
        }
        cout << min_diff / 60 << " " << min_diff % 60 << endl;
    }
 
    return 0;
}
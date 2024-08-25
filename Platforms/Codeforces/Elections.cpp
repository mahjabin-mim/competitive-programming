/*
Author: Mahjabin7
Date: 25/4/24
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
    while (t--) {
        int a, b, c; 
        cin >> a >> b >> c;
        if (a <= max(b, c)) 
            cout << max(b, c) + 1 - a << " ";
        else 
            cout << "0 ";

        if (b <= max(c, a)) 
            cout << max(c, a) + 1 - b << " ";
        else 
            cout << "0 ";
        if (c <= max(a, b)) 
            cout << max(a, b) + 1 - c << " ";
        else 
            cout << "0 ";
        cout << '\n';
    }
 
    return 0;
}
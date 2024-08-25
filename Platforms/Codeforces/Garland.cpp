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

int main() 
{
    optimized
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        map<char, int> mp;
        int n = s.length();
        int mx = -1;
        for (int i = 0; i<n; i++) {
          mp[s[i]]++;
          mx = max(mx, mp[s[i]]);
        }
        
        if (n == 1) {
            cout << 1 << '\n';
        }
        else if (mx <= n/2) {
            cout << n << '\n';
        }
        else if (mp.size() == 1) {
            cout << -1 << '\n';
        }
        else {
            cout << n + 2 << '\n';
        }
    }

    return 0;
}
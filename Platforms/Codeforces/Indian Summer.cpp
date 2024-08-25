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

int main() 
{
    optimized
    int n;
    cin >> n;
 
    map<string, set<string>> mp;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        mp[a].insert(b);
    }
 
    int count = 0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        count += it->second.size();
    }
 
    cout << count << endl;
 
    return 0;
}
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
        int n;
        cin >> n;
 
        vector<int> t(n);
        for (int i = 0; i < n; ++i) {
            cin >> t[i];
        }
 
        map<char, int> mp;
        char c = 'a';
        string  s = "" ;
        for(int i = 0; i < n; i++) {
            if(t[i] == 0) {
                s.push_back(c) ;
                mp[c]++;
                c++;
            }else{
                for(auto it : mp)
                {
                    if(it.second  == t[i])
                    {
                       s.push_back(it.first) ;
                        char  c1 = it.first ;
                        mp[c1]++ ;
                        break;
                    }
                }
            }
        }
        cout << s << endl;
    }
    
    return 0;
}
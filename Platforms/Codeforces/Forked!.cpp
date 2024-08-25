/*
Author: Mahjabin7
Date: 9/3/24
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
        int a,b,x,y,r,c; 
        cin>>a>>b>>x>>y>>r>>c;
     
        int ans=0;
        for (int it = 0; it < 2; it++) {
          for (int i = -1; i <= 1; i += 2) {
            for (int j = -1; j <= 1; j += 2) {
              int nx = x + a * i;
              int ny = y + b * j;
              int dx = abs(nx - r);
              int dy = abs(ny - c);
              if ((dx == a && dy == b) ||
                  (dx == b && dy == a)) {
                ans++;
              }
            }
          }

          if(a != b){
            swap(a, b);
          }else{
            break;
          } 
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
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
        int n,m; 
        cin>>n>>m;

        vector<int>v(n);
        map<int,int>mp_l;
        map<int,int>mp_r;

        for (int i=0; i<n; i++){
            cin>>v[i];
            mp_r[v[i]]=i+1;
        }
        for (int i=n-1; i>=0; i--){
            mp_l[v[i]]=i+1;
        }

        while(m--){
            int l,r; cin>>l>>r;
            if(mp_l[l]<=mp_r[r] && mp_l[l]&&mp_r[r]){
                cout<<"YES"<<endl;
            }else
                 cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
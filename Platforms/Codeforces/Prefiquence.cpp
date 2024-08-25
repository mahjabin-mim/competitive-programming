/*
Author: Mahjabin7
Date: 02/05/24
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
        int n,m;
        cin>>n>>m;

        string a,b;
        cin>>a>>b;
        
        long long ans=0;
        bool flag=false;
        int ind=0;
        for(int i=0; i<n; i++){
            for(int j=ind; j<m; j++){
                if(a[i]==b[j]){
                    ans++;
                    ind=j+1;
                    break;
                }
                if(j==m-1){
                    flag=true;
                }
            }
            if(flag){
                break;
            }
        }
        cout<<ans<<endl;
    }
 
    return 0;
}
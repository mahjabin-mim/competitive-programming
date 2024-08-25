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
        long long n,m,x=-1,y=1e9;
        cin>>n>>m;
        char s[n][m];
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>s[i][j];
                if(s[i][j]=='R' and x==-1)x=j;
                if(s[i][j]=='R'){
                    y=min(y,j);
                }
            }
        }
        if(x<=y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
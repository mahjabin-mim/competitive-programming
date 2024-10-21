/**
 *    author:  Mahjabin7
 *    created: 22.10.2024 02:08:56
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
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
    int cs = 1;
    while(t--){
        int n;
        cin>>n;

        int arr[n+1][3+1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=3; j++){
                cin>>arr[i][j];
            }
        }

        int itdp[n+1][3+1];
        itdp[1][1] = arr[1][1];
        itdp[1][2] = arr[1][2];
        itdp[1][3] = arr[1][3];
        for(int i=2; i<=n; i++){
            int r = arr[i][1];
            int g = arr[i][2];
            int b = arr[i][3];
            itdp[i][1] = min(itdp[i-1][2]+r, itdp[i-1][3]+r);
            itdp[i][2] = min(itdp[i-1][1]+g, itdp[i-1][3]+g);
            itdp[i][3] = min(itdp[i-1][1]+b, itdp[i-1][2]+b);
        }
        int ans = min({itdp[n][1], itdp[n][2], itdp[n][3]});
        cout<<"Case "<<cs<<": "<<ans<<endl;
        cs++;
    }
 
    return 0;
}

/**
 *    author:  Mahjabin7
 *    created: 21.10.2024 16:16:45
**/
// https://lightoj.com/problem/monkey-banana-problem
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
    int cs=1;
    while(t--){
        int n;
        cin>>n;

        int row = n*2-1;
        int col = 0;

        //---- iterative dp ----//
        vector<vector<int>> itdp(row + 1);
        for(int i=1; i<=row; i++){
            if(i<=n){
                col++;
            }else{
                col--;
            }
            itdp[i].resize(col+2);
            for(int j=1; j<=col; j++){
                if(i==1){
                    cin>>itdp[i][j];
                    continue;
                }
                int x;
                cin>>x;
                itdp[i][j] = max(itdp[i][j], itdp[i-1][j]+x);
                if(i<=n){
                    itdp[i][j] = max(itdp[i][j], itdp[i-1][j-1]+x);
                }else{
                    itdp[i][j] = max(itdp[i][j], itdp[i-1][j+1]+x);
                } 
            }
        } 
        cout<<"Case "<<cs<<": "<<itdp[row][col]<<endl;
        cs++; 
    }
 
    return 0;
}

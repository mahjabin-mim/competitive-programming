/**
 *    author:  Mahjabin7
 *    created: 27.10.2024 03:40:25
**/
// https://atcoder.jp/contests/dp/tasks/dp_f
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
    string a, b;
    cin>>a>>b;

    int m = a.length();
    int n = b.length();
    pair<int,char> itdp[m+1][n+1];
    for(int i=0; i<=m; i++) {
        itdp[i][0] = {0, '0'};
    }
    for(int i=0; i<=n; i++) {
        itdp[0][i] = {0, '0'};
    }
    for(int r=1; r<=m; r++){
        for(int c=1; c<=n; c++){
            if(a[r-1] == b[c-1]){
                itdp[r][c] = {itdp[r-1][c-1].first+1, 'd'};
                continue;
            }
            int x = itdp[r-1][c].first;
            int y = itdp[r][c-1].first;
            if(x <= y){
                itdp[r][c] = {y, 'p'};
                continue;
            }
            itdp[r][c] = {x, 'u'};
        }
    }

    string ans = "";
    int r = m;
    int c = n;
    while(r!=0 && c!=0){
        char pointer = itdp[r][c].second;
        if(pointer == 'd'){
            ans += a[r-1];
            r--;
            c--;
        }else if( pointer == 'p'){
            c--;
        }else{
            r--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
 
    return 0;
}

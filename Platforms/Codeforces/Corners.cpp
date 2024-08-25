/*
Author: Mahjabin7
Date: 30/4/24
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
        int n,m,cnt=INT_MAX,c=0,cnt2=0,ans=0;
        cin>>n>>m;
     
       char arr[n][m];
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='1'){
                    ans++;
                }
           }
       }
     
       for(int i=0; i<n-1; i++){
           for(int j=0; j<m-1; j++){
                c=0;
                if(arr[i][j]=='1'){
                    c++;
                }
                if(arr[i][j+1]=='1'){
                    c++;
                }
                if(arr[i+1][j]=='1'){
                    c++;
                }
                cnt=min(cnt,c);
     
                c=0;
                if(arr[i][j]=='1'){
                    c++;
                }
                if(arr[i][j+1]=='1'){
                    c++;
                }
                if(arr[i+1][j+1]=='1'){
                    c++;
                }
                cnt=min(cnt,c);
     
                c=0;
                if(arr[i][j]=='1'){
                    c++;
                }
                if(arr[i+1][j]=='1'){
                    c++;
                }
                if(arr[i+1][j+1]=='1'){
                    c++;
                }
                cnt=min(cnt,c);
     
                c=0;
                if(arr[i][j+1]=='1'){
                    c++;
                }
                if(arr[i+1][j]=='1'){
                    c++;
                }
                if(arr[i+1][j+1]=='1'){
                    c++;
                }
                cnt=min(cnt,c);
            }
        }

        if(ans==0){
            cout<<0<<endl; 
            continue;
        }
        cout<<ans-max(0,(cnt-1))<<endl;
    }
 
    return 0;
}
/*
Author: Mahjabin7
Date: 14/4/24
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
        int n ;
        cin>>n;

        if(n==8 || n==5){
            cout<<3<<endl;
        }else{
            map <int,int> mp;
            mp[0]=0;
            mp[1]=1;  
            mp[2]=2;  
            mp[3]=1;  
            mp[4]=2;  
            mp[5]=1;  
            mp[6]=1;  
            mp[7]=2; 
            mp[8]=2;  
            mp[9]=2;  
            mp[10]=1;
            mp[11]=2;
            mp[12]=2;
            mp[13]=2;
            mp[14]=3;
            mp[15]=1;
            
            int arr[] = {1,3,6,10,15};
            int ans =INT_MAX ;
            for(int i=0; i<5; i++){
              ans = min(ans,(n/arr[i]+(mp[n%arr[i]])));
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
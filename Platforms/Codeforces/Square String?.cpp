/*
Author: Mahjabin7
Date: 28/4/24
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
    while (t--) {
        int flag=0;
        string s; 
        cin>>s;
        if(s.length()%2!=0){
            flag=1;
        }else{
            int cmp = s.length()/2,j=0;
            for(int i =0;i<cmp;i++){
                if(s[i]!=s[cmp+j]){
                    flag=1;
                    break;
                }
                j++;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
/*
Author: Mahjabin7
Date: 19/3/24
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
        int n;
        cin>>n;
        string s;
        cin>>s;

        int count=0;
        int p=0;
        for(int i=0; i<n-4; i++){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
                p++;
            }
        }
        for(int i=0; i<n-2; i++){
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
                count++;
            }else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
                count++;
            }
        }
        cout<<count-p<<endl;
    }
    
    return 0;
}
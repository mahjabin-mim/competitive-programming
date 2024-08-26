/*
Author: Mahjabin7
Date: 14/3/24
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
        long long n;
        cin>>n;

        string s;
        cin>>s;

        long long count=0;
        for(long long i=1;i<s.size();i++){
             if((s[i]=='1' && s[i-1]=='1') || (s[i]=='0' && s[i-1]=='0')){
                count++;
             }
        }
        cout<<(count+1)/2<<endl;
    }
    
    return 0;
}
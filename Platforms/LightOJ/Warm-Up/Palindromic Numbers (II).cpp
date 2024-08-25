/*
Author: Mahjabin7
Date: 19/05/24
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
    int cs=1;
    while(t--){
        string s;
        cin>>s;

        int i=0;
        int j=s.length()-1;
        bool flag=true;
        while(i<=j){
            if(s[i]!=s[j]){
                flag=false;
                break;
            }
            i++;
            j--;
        }

        if(flag){
            cout<<"Case "<<cs<<": Yes"<<endl;
        }else{
            cout<<"Case "<<cs<<": No"<<endl;
        }
        cs++;
    }
 
    return 0;
}
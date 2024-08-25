/*
Author: Mahjabin7
Date: 4/3/24
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
        string s;
        cin>>s;

        int ind=0;
        vector <string> v;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!='0'){
                string x="";
                x+=s[i];
                for(int j=0; j<ind; j++){
                    x+='0';
                }
                v.push_back(x);
            }
            ind++;
        }

        cout<<v.size()<<endl;
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
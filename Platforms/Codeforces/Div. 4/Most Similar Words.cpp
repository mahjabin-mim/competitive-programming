/*
Author: Mahjabin7
Date: 5/3/24
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
    char arr[27] = {'*','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    map <char,int> mp;
    for(int i=1; i<=26; i++){
        mp[arr[i]]=i;
    }

    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n>>m;

       vector <string> v;
       for(int i=0; i<n; i++){
            string s;
            cin>>s;
            v.push_back(s);
       } 

       int ans=INT_MAX;
       for(int i=0; i<n-1; i++){
            string a=v[i];
            for(int j=0; j<n; j++){
                string b=v[j];
                if(i==j){
                    continue;
                }else if(a==b){
                    ans=0;
                    break;
                }else{
                    int d=0;
                    for(int k=0; k<m; k++){
                        int x=mp[a[k]];
                        int y=mp[b[k]];
                        d+=abs(x-y);
                    }
                    ans=min(ans,d);
                }
            }
       }
       cout<<ans<<endl;
    }
    
    return 0;
}
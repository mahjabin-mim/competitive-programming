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

long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main() 
{
    optimized
    vector <long long> v;
    for(long long i=0; i<=20; i++){
        v.push_back(factorial(i));
    }

    int t;
    cin>>t;
    int cs=1;
    while(t--){
        long long n;
        cin>>n;
        vector <int> ans;
        for(int i=20; i>=0; i--){
            if(n>=v[i]){
                n-=v[i];
                ans.push_back(i);
            }
            if(n==0){
                break;
            }
        }
        
        cout<<"Case "<<cs<<": ";
        if(n!=0){
            cout<<"impossible"<<endl;
        }else{
            for(int i=ans.size()-1; i>0; i--){
                cout<<ans[i]<<"!+";
            }
            cout<<ans[0]<<"!"<<endl;
        }
        cs++;
    }
    
    return 0;
}
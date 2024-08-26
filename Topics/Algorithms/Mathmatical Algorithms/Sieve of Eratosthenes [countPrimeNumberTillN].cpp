/*
Author: Mahjabin7
Date: 26/08/24
Algo: Sieve Of Eratosthenes
This is a optimized code to print all primes till n.
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

vector <int> v(100000+7);
void seive(int n){
    for(int j=4; j<=n; j+=2){
        v[j]=1;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        if(v[i]==0){
            for(int j=i*i; j<=n; j+=i){
                v[j]=1;
            }
        }
    }
}

int main() 
{    
    optimized
    int n;
    cin>>n;
    if(n==0 || n==1){
        cout<<0<<endl;
    }else{
        seive(n);
        int ans=0;
        for(int i=2; i<=n; i++){
            if(v[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 16/3/24
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
        long long n,k;
        cin>>n>>k;

        map <long long,long long> mp;
        map <long long,long long> lMP;
        vector <long long> l;
        for(long long i=0; i<n; i++){
            int z;
            cin>>z;
            mp[z]++;
            lMP[z]++;
            if(lMP[z]==2){
                l.push_back(z);
            }
        }

        vector <long long> r;
        vector <long long> match;
        map <long long,long long> rMP;
        for(long long i=0; i<n; i++){
            int z;
            cin>>z;
            rMP[z]++;
            if(rMP[z]==2){
                r.push_back(z);
            }
            if(mp[z]==1){
                match.push_back(z);
            }
        }

        if(l.size()>=k){
            for(long long i=0; i<k; i++){
                cout<<l[i]<<" "<<l[i]<<" ";
            }
        }else{
            long long x=(k*2)-(l.size()*2);
            for(long long i=0; i<l.size(); i++){
                cout<<l[i]<<" "<<l[i]<<" ";
            }
            for(long long i=0; i<x; i++){
                cout<<match[i]<<" ";
            }
        }
        cout<<endl;
        

        if(r.size()>=k){
            for(long long i=0; i<k; i++){
                cout<<r[i]<<" "<<r[i]<<" ";
            }
        }else{
            long long x=(k*2)-(r.size()*2);
            for(long long i=0; i<r.size(); i++){
                cout<<r[i]<<" "<<r[i]<<" ";
            }
            for(long long i=0; i<x; i++){
                cout<<match[i]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
/*
Author: Mahjabin7
Date: 05/07/24
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

int lower_bound(vector <int> arr, int n, int k)
{
    int mid, low=0, high=n;
    int ind;
    while(low<=high){
        mid=(low+high)/2;
        if(k<=arr[mid]){ 
            ind=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }

    int dis;
    if(ind!=0){
        dis = min(abs(arr[ind]-k),abs(arr[ind-1]-k));
    }else{
        dis = abs(arr[ind]-k);
    }

    return dis;
}

int main() 
{    
    optimized
    int n;
    cin>>n;

    int arr[n];
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==0){
            v.push_back(i);
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            continue;
        }else if(i>v[v.size()-1]){
            arr[i]=abs(v[v.size()-1]-i);
        }else{
            arr[i]=lower_bound(v,v.size(),i);
        }
    }

    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
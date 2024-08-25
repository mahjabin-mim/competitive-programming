/*
Author: Mahjabin7
Date: 28/2/24
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

long long midSum(int arr[], int l, int mid, int r)
{
    long long lSum=INT_MIN;
    long long sum=0;
    for(int i=mid; i>=l; i--){
        sum+=arr[i];
        if(sum>lSum){
            lSum=sum;
        }
    }
    long long rSum=INT_MIN;
    sum=0;
    for(int i=mid+1; i<=r; i++){
        sum+=arr[i];
        if(sum>rSum){
            rSum=sum;
        }
    }

    return (lSum+rSum);
}

long long maxSum(int arr[], int l, int r)
{
    if(l==r){
        return arr[l];
    }

    int mid=(l+r)/2;
    long long lSum=maxSum(arr,l,mid);
    long long rSum=maxSum(arr,mid+1,r);
    long long mSum=midSum(arr,l,mid,r);

    return max(max(lSum,rSum),mSum);
}

int main() 
{
    optimized
    int n;
    cin>>n;

    int arr[n+10];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    int l=1,r=n;
    long long sum=maxSum(arr,l,r);
    cout<<sum<<endl;
    
    return 0;
}
/*
Author: Mahjabin7
Date: 25/08/24
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
    int n=10+1;
    int arr[n]={11,44,33,7,3,6,10,8,9,2};
    
    sort(arr,arr+n);
    for(int i=1; i<=n; i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
    
    int x=7;
    int l=1;
    int r=n;
    int ans;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
          ans=mid;
          break;
        }
        if(arr[mid]>x){
          r=mid-1;
        }else{
          l=mid+1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

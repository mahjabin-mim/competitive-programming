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
        int mid1=l+((r-l)/3);
        int mid2=r-((r-l)/3);

        if(arr[mid1]==x){
            ans=mid1;
            break;
        }
        if(arr[mid2]==x){
            ans=mid2;
            break;
        }

        //divides the array in 3 groups by 2 mid
        if(arr[mid1]>x){
            // target is in left group
          r=mid1-1;
        }else if(arr[mid2]<x){
            // target is in right grpup
          l=mid2+1;
        }else{
            // target is in the middle group (between mid1 and mid2)
            l=mid1+1;
            r=mid2-1;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}

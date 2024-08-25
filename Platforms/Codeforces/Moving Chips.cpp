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
        int n;
        cin>>n;

        int arr[n];
        bool one=false;
        int indL=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]==1 && one==false){
                indL=i;
                one=true;
            }
        }
        int indR=0;
        for(int i=n-1; i>=indL; i--){
            if(arr[i]==1){
                indR=i;
                break;
            }
        }

        int ans=0;
        for(int i=indL; i<=indR; i++){
            if(arr[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
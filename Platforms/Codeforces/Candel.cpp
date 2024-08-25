#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() {
    optimized
    int t;
    cin>>t;

    while (t--) {
        int n,m;
        cin>>n>>m;

        int arr1[n], arr2[m];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<m; i++){
            cin>>arr2[i];
        }

        sort(arr1,arr1+n);
        sort(arr2,arr2+m);

        int x=m-(n/2)-1;
        debug(x);
        int sum=0;
        if(n==1){
            sum+=abs(arr1[0]-arr2[m-1]);
        }else if(n==m){
            int i=0;
            int j=m-1;
            while(i<n){
                sum+=abs(arr1[i]-arr2[j]);
                i++;
                j--;
            }
        }
        else{
            int i=0;
            int j=m-1;
            while(i<n/2){
                sum+=abs(arr1[i]-arr2[j]);
                i++;
                j--;
            }
            i=n/2;
            j=0;
            while(i<n){
                sum+=abs(arr1[i]-arr2[j]);
                i++;
                j++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

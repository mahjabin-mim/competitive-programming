#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        long long arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        cout<<arr[0]<<endl;
    }
    return 0;
}
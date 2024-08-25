#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        int arr[n];
        for(int i =0 ;i<n;i++){
            cin>>arr[i];
        }
        
        if(arr[0]==1){
            cout<<"YES"<<endl;;
        }else{
            cout<<"NO"<<endl;;
        }
    }
        
        
  return 0;
}
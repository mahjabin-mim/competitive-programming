#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      
      long long ans=0;
      for(int i=30;i>=0;i--){
        long long count=0;
        for(int j=0;j<n;j++){
            if(arr[j]>=(1<<i) && arr[j]<(1<<(i+1))){
                count++;
            }
        }
        ans+=count*(count-1)/2;
    }
    cout<<ans<<'\n';
    }
    
    return 0;
}
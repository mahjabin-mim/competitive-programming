#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    
    int ans[n];
    int odd=0;
    int even=n-1;
    for(int i=0; i<n; i++){
      if((i+1)%2!=0){
        ans[i]=arr[odd];
        odd++;
      }else{
        ans[i]=arr[even];
        even--;
      }
    }
    
    for(int i=0; i<n; i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
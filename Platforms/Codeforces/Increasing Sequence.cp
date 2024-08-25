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
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      
      int ans[n];
      int val=1;
      for(int i=0; i<n; i++){
        if(val==arr[i]){
          val++;
          ans[i]=val;
          val++;
        }else{
          ans[i]=val;
          val++;
        }
      }
      cout<<ans[n-1]<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
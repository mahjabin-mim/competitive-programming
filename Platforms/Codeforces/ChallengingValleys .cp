#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,min;
      cin>>n;
      
      int arr[n];
      bool sorted=true;
      for(int i=0; i<n; i++){
        cin>>arr[i];
      
        if(i!=0 && arr[i-1]>arr[i]){
          sorted=false;
        }
      }
      
      if(sorted){
        cout<<"YES"<<endl;
      }else{
        bool flag=true;
        for(int i=0; i<n-1; i++){
          if(arr[i]<arr[i+1]){
            for(int j=i+1; j<n-1; j++){
              if(arr[j]>arr[j+1]){
                flag=false;
                break;
              }
            }
          }
        }
        
        if(flag){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
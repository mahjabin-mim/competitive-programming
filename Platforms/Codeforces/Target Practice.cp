#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      char arr[10+1][10+1];
      for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
          cin>>arr[i][j];
        }
      }
      
      long long ans=0;
      for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
          if(arr[i][j]=='X'){
            if(i<=5){
              if(j<=5){
                ans+=min(i,j);
              }else{
                ans+=min(i,11-j);
              }
            }else{
              if(j<=5){
                ans+=min(11-i,j);
              }else{
                ans+=min(11-i,11-j);
              }
            }
          }
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
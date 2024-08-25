#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,m;
      cin>>n>>m;
      
      int arr[n][m];
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          char x;
          cin>>x;
          arr[i][j]=x;
        }
      }
      
      char find='v';
      int count=0;
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          
          if(count==1){
            find='i';
          }else if(count==2){
            find='k';
          }else if(count==3){
            find='a';
          }else if(count==4){
            break;
          }
          
          if(arr[j][i]==find){
            count++;
            break;
          }
        }
        
        if(count==4){
          break;
        }
      }
      
      if(count==4){
          cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
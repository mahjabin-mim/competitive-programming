#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      
      char arr[3][3];
      for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
          cin>>arr[i][j];
        }
      }
      
      if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2] && arr[0][0]!='.'){
        cout<<arr[0][0]<<endl;
      }
      else if(arr[2][0]==arr[1][1] && arr[1][1]==arr[0][2] && arr[2][0]!='.'){
        cout<<arr[2][0]<<endl;
      }
      else if(arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2] && arr[0][0]!='.'){
        cout<<arr[0][0]<<endl;
      }
      else if(arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2] && arr[1][0]!='.'){
        cout<<arr[1][0]<<endl;
      }
      else if(arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2] && arr[2][0]!='.'){
        cout<<arr[2][0]<<endl;
      }
      else if(arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0] && arr[0][0]!='.'){
        cout<<arr[0][0]<<endl;
      }
      else if(arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1] && arr[0][1]!='.'){
        cout<<arr[0][1]<<endl;
      }
      else if(arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2] && arr[0][2]!='.'){
        cout<<arr[0][2]<<endl;
      }
      else{
        cout<<"DRAW\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
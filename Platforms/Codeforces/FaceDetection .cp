#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    
    char arr[m+1][n+1];
    for(int i=1; i<=m; i++){
      for(int j=1; j<=n; j++){
        cin>>arr[i][j];
      }
    }
    
    int count=0;
    for(int i=1; i<m; i++){
      for(int j=1; j<n; j++){
        if(arr[i][j]=='f' && arr[i][j+1]=='a' || arr[i][j]=='a' && arr[i][j+1]=='f'){
          if(arr[i+1][j]=='c' && arr[i+1][j+1]=='e' 
             || arr[i+1][j]=='e' && arr[i+1][j+1]=='c'){
             count++;
          }
        }
        else if(arr[i][j]=='f' && arr[i][j+1]=='c' || arr[i][j]=='c' && arr[i][j+1]=='f'){
          if(arr[i+1][j]=='a' && arr[i+1][j+1]=='e' 
             || arr[i+1][j]=='e' && arr[i+1][j+1]=='a'){
             count++;
          }
        }
        else if(arr[i][j]=='f' && arr[i][j+1]=='e' || arr[i][j]=='e' && arr[i][j+1]=='f'){
          if(arr[i+1][j]=='c' && arr[i+1][j+1]=='a' 
             || arr[i+1][j]=='a' && arr[i+1][j+1]=='c'){
             count++;
          }
        }
        else if(arr[i][j]=='a' && arr[i][j+1]=='e' || arr[i][j]=='e' && arr[i][j+1]=='a'){
          if(arr[i+1][j]=='f' && arr[i+1][j+1]=='c' 
             || arr[i+1][j]=='c' && arr[i+1][j+1]=='f'){
             count++;
          }
        }
        else if(arr[i][j]=='c' && arr[i][j+1]=='e' || arr[i][j]=='e' && arr[i][j+1]=='c'){
          if(arr[i+1][j]=='f' && arr[i+1][j+1]=='a' 
             || arr[i+1][j]=='a' && arr[i+1][j+1]=='f'){
             count++;
          }
        }
        else if(arr[i][j]=='a' && arr[i][j+1]=='c' || arr[i][j]=='c' && arr[i][j+1]=='a'){
          if(arr[i+1][j]=='f' && arr[i+1][j+1]=='e' 
             || arr[i+1][j]=='e' && arr[i+1][j+1]=='f'){
             count++;
          }
        }
      }
    }
      
    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
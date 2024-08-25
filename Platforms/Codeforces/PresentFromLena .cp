#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int r=(2*n)+1;
    int c=(2*n)+1;
    int arr[r][c];
    
    for(int row=0; row<r; row++){
      for(int col=0; col<c; col++){
        arr[row][col]=10;
      }
    }
    
    int min=n-1;
    for(int row=0; row<r; row++){
      for(int col=0; col<c; col++){
        if(row==n){
          if(col<=n){
            arr[row][col]=col;
          }else{
            arr[row][col]=min;
            min--;
          }
        }
      }
    }
    
    int value=0;
    int a=1;
    int b=c-1;
    for(int row=n-1; row>=0; row--){
      for(int col=a; col<b; col++){
        if(col<n){
          arr[row][col]=value;
          value++;
        }else{
          arr[row][col]=value;
          value--;
        }
      }
      a++;
      b--;
      value=0;
    }
    
    value=0;
    a=1;
    b=c-1;
    for(int row=n+1; row<=n*2; row++){
      for(int col=a; col<b; col++){
        if(col<n){
          arr[row][col]=value;
          value++;
        }else{
          arr[row][col]=value;
          value--;
        }
      }
      a++;
      b--;
      value=0;
    }
    
    for(int row=0; row<r; row++){
      for(int col=0; col<c; col++){
        if(arr[row][col]==10 && col<n){
          cout<<"  ";
        }
        else if(arr[row][col]==10 && col>n){
          break;
        }
        else if(arr[row][col]==0 && col>=n){
          cout<<arr[row][col];
        }
        else{
          cout<<arr[row][col]<<" ";
        }
      }
      cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
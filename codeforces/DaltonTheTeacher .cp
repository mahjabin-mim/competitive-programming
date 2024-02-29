#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      
      int temp,count=0;
      for(int i=0; i<n; i++){
        if(arr[i]==i+1){
          temp=arr[i];
          bool flag=true;
          for(int j=i+1; j<n; j++){
            if(arr[j]==j+1){
            arr[i]=arr[j];
            arr[j]=temp;
            count++;
            flag=false;
            break;
            }
          }
          if(flag){
            if(i!=n-1){
              arr[i]=arr[i+1];
              arr[i+1]=temp;
              count++;
            }else{
              arr[i]=arr[i-1];
              arr[i-1]=temp;
              count++;
            }
          }
        }
      }
      
      cout<<count<<endl;
    }

    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
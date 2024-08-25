#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    sort(arr,arr+n);
    int count=0;
    for(int i=n-1; i>=0; i--){
      if(arr[i]==4){
        count++;
        arr[i]=0;
      }
      else if(arr[i]==3){
        count++;
        arr[i]=0;
        for(int j=0; j<n; j++){
          if(arr[j]==2 || arr[j]==3){
            break;
          }else if(arr[j]==1){
            arr[j]=0;
            break;
          }
        }
      }
      else if(arr[i]==2){
        count++;
        arr[i]=0;
        int member=2;
        for(int j=0; j<n; j++){
          if(arr[j]==2){
            if(member+2==4){
              arr[j]=0;
              break;
            }else{
              break;
            }
          }else if(arr[j]==1){
            if(member<4){
              member+=1;
              arr[j]=0;
            }else{
              break;
            }
          }
        }
      }
      else if(arr[i]==1){
        count++;
        arr[i]=0;
        int member=1;
        for(int j=0; j<n; j++){
          if(arr[j]==1){
            if(member<4){
              member+=1;
              arr[j]=0;
            }else{
              break;
            }
          }
        }
      }
      else{
        break;
      }
    }

    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
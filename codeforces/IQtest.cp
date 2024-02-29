#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n+1];
    for(int i=1; i<=n; i++){
      cin>>arr[i];
    }
    
    if(arr[1]%2==0 && arr[2]%2==0 || arr[1]%2==0 && arr[n]%2==0 ||
      arr[2]%2==0 && arr[n]%2==0){
        for(int i=1; i<=n; i++){
            if(arr[i]%2!=0){
              cout<<i<<endl;
              break;
            }
          }
      }else{
        for(int i=1; i<=n; i++){
            if(arr[i]%2==0){
              cout<<i<<endl;
              break;
            }
          }
      }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
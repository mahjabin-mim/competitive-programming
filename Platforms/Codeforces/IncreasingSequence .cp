#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    
    int count=0;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    for(int i=1; i<n; i++){
      if(arr[i-1] >= arr[i]){
        int a=arr[i-1]-'0';
        int b=arr[i]-'0';
        b=a-b;
        
        if(b==0){
          count+=1;
          arr[i]=arr[i]+d;
        }else{
          a=b/d;
          count+=a;
          arr[i]=arr[i]+d*a;
          
          if(b%d != 0 || arr[i-1]==arr[i]){
            count+=1;
            arr[i]=arr[i]+d;
          }
        }
      }
    }
    
    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
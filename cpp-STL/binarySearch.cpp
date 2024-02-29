#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;


int main()
{   
    int n=10;
    int arr[n]={11,44,33,7,3,6,10,8,9,2};
    
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }cout<<endl;
    
    int x=10;
    int l=0;
    int r=n-1;
    for(int i=0; i<n; i++){
      while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
          r=mid-1;
        }else if(arr[mid]>x){
          r=mid-1;
        }else{
          l=mid+1;
        }
      }
    }
    cout<<l+1<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	

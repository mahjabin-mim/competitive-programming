#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      long long n;
      cin>>n;
      
      long long arr1[n];
      long long arr2[n];
      for(long long i=0; i<n; i++){
        cin>>arr1[i];
        arr2[i]=arr1[i];
      }
      
      sort(arr2,arr2+n);
      long long max,min;
      for(int i=0; i<n; i++){
        if(arr2[0]==arr1[i]){
          min=i+1;
        }
        if(arr2[n-1]==arr1[i]){
          max=i+1;
        }
      }
      
      cout<<min<<" "<<max<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
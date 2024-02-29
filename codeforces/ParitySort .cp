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
        int x;
        cin>>x;
        arr1[i]=x;
        arr2[i]=x;
      }
      
      sort(arr2,arr2+n);
      bool flag=true;
      for(long long i=1; i<n; i++){
        if(arr1[i]%2==0 && arr2[i]%2!=0 || arr1[i]%2!=0 && arr2[i]%2==0){
          flag=false;
          break;
        }
      }
      
      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
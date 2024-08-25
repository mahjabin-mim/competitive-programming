#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,mx1=0,mx2=0;
      cin>>n;
      
      int arr1[n],arr2[n];
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr1[i]=a;
        arr2[i]=a;
      }
      sort(arr2,arr2+n);
      
      if(arr2[0]==arr2[n-1]){
        for(int i=0; i<n; i++){
          cout<<0<<" ";
        }
        cout<<endl;
      }else{
        for(int i=0; i<n; i++){
          int a=arr1[i]-arr2[n-1];
          if(a!=0){
            cout<<a<<" ";
          }else{
            cout<<arr2[n-1]-arr2[n-2]<<" ";
          }
        }
        cout<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
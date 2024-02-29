#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        string s;
        cin>>s;
        for(int j=a-1; j>=0; j--){
          if(s[j]=='U'){
            arr[i]--;
            if(arr[i]<0){
              arr[i]=9;
            }
          }else{
            arr[i]++;
            if(arr[i]>9){
              arr[i]=0;
            }
          }
        }
      }
      
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
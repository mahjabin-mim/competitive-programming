#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int x,y,n;
      cin>>x>>y>>n;
      
      if(y-x<n){
        cout<<-1<<endl;
      }else{
        int arr[n];
        arr[0]=y;
        bool flag=true;
        for(int i=1; i<n; i++){
          arr[i]=arr[i-1]-i;
          if(arr[i]<x){
            cout<<-1<<endl;
            flag=false;
            break;
          }
        }
        if(flag){
          arr[n-1]=x;
          sort(arr,arr+n);
          for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
          }
          cout<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
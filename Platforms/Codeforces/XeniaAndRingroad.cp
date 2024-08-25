#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,m;
    cin>>n>>m;
    
    int arr[m];
    for(int i=0; i<m; i++){
      cin>>arr[i];
    }
    
    long long count=arr[0]-1;
    for(int i=0; i<m-1; i++){
      if(arr[i]<arr[i+1]){
        count+=arr[i+1]-arr[i];
      }else if(arr[i]>arr[i+1]){
        count+=n-(arr[i]-arr[i+1]);
      }
    }
    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
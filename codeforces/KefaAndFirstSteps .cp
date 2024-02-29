#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    int mx=0;
    int count=1;
    for(int i=0; i<n-1; i++){
      if(arr[i]<=arr[i+1]){
        count++;
      }else{
        mx=max(mx,count);
        count=1;
      }
    }
    
    mx=max(mx,count);
    cout<<mx<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
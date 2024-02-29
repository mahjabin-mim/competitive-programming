#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,k;
    cin>>n>>k;
    
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    int count=0;
    for(int i=0; i<n; i++){
      if(arr[i]>0 && arr[i]>=arr[k-1]){
        count++;
      }
    }
    cout<<count<<endl;
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
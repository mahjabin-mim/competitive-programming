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
      
      if(n%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
      }else{
        cout<<4<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
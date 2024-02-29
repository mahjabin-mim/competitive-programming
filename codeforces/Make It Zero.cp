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
      int xr=0;
      for(int i=0; i<n; i++){
        cin>>arr[i];
        xr=xr^arr[i];
      }
      
      if(xr==0){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
      }
      else{
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
    }
    
    // int r=1^1^9^9^0^1^8;
    // cout<<r<<r<<r<<r<<r<<r<<r<<endl;
    // r=9^9^9^9^9^9 ;
    // cout<<r<<r<<r<<r<<r<<r<<9<<endl;
    // r=0^9;
    // cout<<0<<0<<0<<0<<0<<r<<r<<endl;
    // r=9^9;
    // cout<<0<<0<<0<<0<<0<<r<<r<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    int bac=1;
    int ans=1;
    for(int i=1; i<10000000000; i++){
      if(bac==n){
        break;
      }else if(bac>n){
        int a=(n-(bac/2));
        n=a;
        bac=1;
        ans++;
      }else{
        bac*=2;
      }
    }
    cout<<ans<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
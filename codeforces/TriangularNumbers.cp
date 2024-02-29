#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    int sum=0;
    bool flag=false;
    for(int i=1; i<=500; i++){
      sum+=i;
      if(sum==n){
        flag=true;
        break;
      }else if(sum>n){
        break;
      }
    }
    
    if(flag){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
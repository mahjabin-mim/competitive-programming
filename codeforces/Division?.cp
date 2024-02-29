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
      
      if(n>=1900){
        cout<<"Division 1"<<endl;
      }else if(n>=1600){
        cout<<"Division 2"<<endl;
      }else if(n>=1400){
        cout<<"Division 3"<<endl;
      }else{
        cout<<"Division 4"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
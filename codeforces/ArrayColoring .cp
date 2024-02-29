#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      int even=0;
      int odd=0;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a%2==0){
          even+=a;
        }else{
          odd+=a;
        }
      }
      
      if(odd%2==0 && even%2==0 || odd%2!=0 && even%2!=0){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
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
      
      long long one=0;
      long long other=0;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        
        if(a==1){
          one++;
        }else{
          other+=(a-1);
        }
      }
      
      if(n==1){
        cout<<"NO"<<endl;
      }else{
        if(one>other){
          cout<<"NO"<<endl;
        }else{
          cout<<"YES"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
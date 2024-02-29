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
      
      if(n==1){
        cout<<-1<<endl;
      }else{
        string s="23";
        for(int i=0; i<n-2; i++){
          s+='3';
        }
        cout<<s<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
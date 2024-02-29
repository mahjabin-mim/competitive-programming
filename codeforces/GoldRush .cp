#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

bool check(int n,int m){
  
    if(n==m){
      return true;
    }else if(n<m || n%3!=0){
      return false;
    }
    
    bool found=false;
    found=check(n/3,m);
    if(found==true){
      return true;
    }else{
      return check((n/3)*2,m);
    }
}

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n,m;
      cin>>n>>m;
      
      if(check(n,m)==true){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
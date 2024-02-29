#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string Ia,Ib;
    cin>>Ia>>Ib;
    cout<<Ia<<" "<<Ib<<endl;
    
    int t;
    cin>>t;
    
    while(t--){
      string a,b;
      cin>>a>>b;
      if(a==Ia){
        Ia=b;
      }else{
        Ib=b;
      }
      cout<<Ia<<" "<<Ib<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
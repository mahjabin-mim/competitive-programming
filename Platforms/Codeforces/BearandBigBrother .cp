#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int year=0;
    for(int i=1; i<=7; i++){
      
      if(a<=b){
        a=a*3;
        b=b*2;
        year++;
      }
      else{
        break;
      }
    }
    
    cout<<year<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
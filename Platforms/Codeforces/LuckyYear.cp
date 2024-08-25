#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    string s=to_string(n);
    if(s.length()==1){
      cout<<"1"<<endl;
    }
    else{
      int a=(s[0]-'0')+1;
      string str=to_string(a);
      
      for(int i=1; i<s.length(); i++){
        str+="0";
      }
      
      int year=stoi(str);
      year=year-n;
      cout<<year<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
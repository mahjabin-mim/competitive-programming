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
       
       string s;
       cin>>s;
       
       set<string> set;
       string str;
       
       str = s.substr(2);
       set.insert(str);
       str="";
       
       str = s.substr(0,n-2);
       set.insert(str);
       str="";
       
       for(int i=1; i<n-2; i++){
         
         str += s.substr(0,i);
         str += s.substr(i+2);
         
         set.insert(str);
         str="";
       }
       
       cout<<set.size()<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
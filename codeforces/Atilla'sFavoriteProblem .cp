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
      
      sort(s.begin(),s.end());
      cout<<s[n-1]-96<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      string s;
      cin>>s;
      
      if(s.length()<=10){
        cout<<s<<endl;
      }else{
        string str="";
        str+=s[0];
        int count=0;
        for(int i=1; i<s.length()-1; i++){
          count++;
        }
        str+=to_string(count);
        str+=s[s.length()-1];
        cout<<str<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
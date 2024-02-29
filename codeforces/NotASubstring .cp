#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      string str;
      cin>>str;
      
      if(str=="()"){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
        
        string s1="",s2="";
        for(int i=0; i<str.length(); i++){
          s1+='(';
          s1+=')';
        }
        for(int i=0; i<str.length(); i++){
          s2+='(';
        }
        for(int i=0; i<str.length(); i++){
          s2+=')';
        }
        
        if(s1.find(str) != string::npos){
          cout<<s2<<endl;
        }else{
          cout<<s1<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
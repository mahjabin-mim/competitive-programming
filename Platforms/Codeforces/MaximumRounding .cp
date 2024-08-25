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
      
      bool flag=false;
      for(int i=s.length()-1; i>=0; i--){
        if(s[i]>='5' && i!=0){
          int temp=s[i-1]-'0';
          temp+=1;
          s[i-1]=temp+'0';
        }else if(s[i]>='5' && i==0){
          flag=true;
        }
      }
     
      if(flag){
        string str="";
        str+='1';
        for(int i=0; i<s.length(); i++){
          str+='0';
        }
        cout<<str<<endl;
      }else{
        for(int i=0; i<s.length(); i++){
          if(s[i]>='5'){
            flag=true;
          }
          if(flag){
            s[i]='0';
          }
        }
        cout<<s<<endl;
      }
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
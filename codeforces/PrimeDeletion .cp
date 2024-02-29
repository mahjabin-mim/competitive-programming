#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      string s=to_string(n);
      string str="";
      bool find=false;
      for(int i=0; i<s.length()-1; i++){
        str+=s[i];
        for(int j=i+1; j<s.length(); j++){
          str+=s[j];
          int a=stoi(str);
          bool flag=true;
          for(int k=2; k<=a/2; k++){
            if(a%k==0){
              flag=false;
              break;
            }
          }
          if(flag){
            find=true;
            break;
          }else{
            str="";
            str+=s[i];
          }
        }
        if(find){
          break;
        }
      }
      
      if(find){
        cout<<str<<endl;
      }else{
        cout<<-1<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
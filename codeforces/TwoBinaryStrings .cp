#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      string s1,s2;
      cin>>s1>>s2;
      bool flag=false;
      
      if(s1==s2){
        cout<<"YES"<<endl;
      }else{
        bool flag=false;
        for(int i=0; i<s1.length()-1; i++){
          if(s1[i]=='0' && s2[i]=='0' && s1[i+1]=='1' && s2[i+1]=='1'){
            flag=true;
            break;
          }
        }
        if(flag){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
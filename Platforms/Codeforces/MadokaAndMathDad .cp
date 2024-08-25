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
      
      if(n==1 || n==2){
        cout<<n<<endl;
      }
      else{
        bool flag=false;
        int a=2;
        int b=0;
        string s="";
        for(int i=0; i<100000000; i++){
          s+=to_string(a);
          b+=a;
          if(a==1){
            a=2;
          }else{
            a=1;
          }
          
          if(b==n){
            cout<<s<<endl;
            break;
          }else if(b>n){
            flag=true;
            break;
          }
        }
        
        if(flag){
          a=1;
          b=0;
          s="";
          for(int i=0; i<100000000; i++){
            s+=to_string(a);
            b+=a;
            if(a==1){
              a=2;
            }else{
              a=1;
            }
          
            if(b==n){
              break;
            }
          }
          cout<<s<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
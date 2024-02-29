#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        string s;
        cin>>s;
        
        bool flag=false;
        for(int i=1; i<s.length()-1; i++){
          
          char a,b;
          a= s[0];
          b= s[i];
        
          if(a != b){
            
            for(int j=i+1; j<s.length()-1; j++){
              char c;
              c= s[j];
              
              if(b == c){
                flag=true;
                break;
              }
            }
          }
        }
        
        if(flag==true){
          cout<<"Yes\n";
        }
        else{
          cout<<"No\n";
        }
        
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
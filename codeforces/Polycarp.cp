#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        string pi= "314159265358979323846264338327";
        string s;
        cin>>s;
        
        int count=0;
        for(int i=0; i<= s.length()-1; i++){
          char a,b;
          a = s[i];
          b = pi[i];
          
          if(a==b){
            count++;
          }else{
            break;
          }
        }
        
        cout<<count<<"\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
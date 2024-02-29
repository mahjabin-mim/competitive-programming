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
        
        char c = s[0];
        
        for(int i=1; i<=s.length()-1; i++){
          
          char d = s[i];
          
          if(c==d){
            cout<<d;
            c=s[i+1];
            i+=1;
          }
        }
        cout<<"\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
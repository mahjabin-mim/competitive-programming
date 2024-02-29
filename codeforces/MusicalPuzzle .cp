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
        
        set<string>set;
        
        for(int i=0; i<s.length()-1; i++){
          string a = "";
          a += s[i];
          a += s[i+1];
          
          set.insert(a);
          
        }
        
        cout<<set.size()<<"\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
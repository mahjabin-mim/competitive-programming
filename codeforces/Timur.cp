#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        int n,t,i,m,u,r;
        cin>>n;
        
        string s;
        cin>>s;
        
        t=0, i=0, m=0, u=0, r=0;
        for(int j=0; j<5; j++){
          
          char c=s[j];
          
          if(c=='T'){
            t++;
          }else if(c=='i'){
            i++;
          }else if(c=='m'){
            m++;
          }else if(c=='u'){
            u++;
          }else if(c=='r'){
            r++;
          }
        }
        
        if(n==5 && t==1 && i==1 && m==1 && u==1 && r==1){
          cout<<"Yes\n";
        }else{
          cout<<"No\n";
        }
        
        
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
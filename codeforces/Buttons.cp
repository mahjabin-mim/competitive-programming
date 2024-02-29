#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      
      if(c%2==0){
        int x=c/2;
        if(x+b<x+a){
          cout<<"First"<<endl;
        }else{
          cout<<"Second"<<endl;
        }
      }else{
        int x=c/2;
        int y=(c%2)+x;
        if(x+b<y+a){
          cout<<"First"<<endl;
        }else{
          cout<<"Second"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
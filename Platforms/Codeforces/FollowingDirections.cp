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
      string s;
      cin>>s;
      
      bool flag=false;
      int x=0,y=0;
      for(int i=0; i<n; i++){
        if(s[i]=='U'){
          y++;
        }else if(s[i]=='D'){
          y--;
        }else if(s[i]=='R'){
          x++;
        }else if(s[i]=='L'){
          x--;
        }
        
        if(x==1 && y==1){
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
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
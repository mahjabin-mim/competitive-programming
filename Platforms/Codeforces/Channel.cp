#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,a,q;
      cin>>n>>a>>q;
      
      string s;
      cin>>s;
      
      if(n<=a){
        cout<<"YES"<<endl;
      }else{
        int x=a;
        int y=0;

        bool flag1=false;
        bool flag2=false;
        for(int i=0; i<q; i++){
          if(x>=n && (x-y)>=n){
            flag1=true;
          }else if(x>=n){
            flag2=true;
          }
          
          if(s[i]=='+'){
            x++;
          }else{
            y++;
          }
        }
        
        if(x>=n && (x-y)>=n){
            flag1=true;
        }else if(x>=n){
            flag2=true;
        }
        
        if(flag1){
          cout<<"YES"<<endl;
        }else if(flag2){
          cout<<"MAYBE"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
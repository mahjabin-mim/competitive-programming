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
      
      if(a==b){
        cout<<0<<endl;
      }else if(a<c && b<c){
        cout<<1<<endl;
      }else{
        int count=0;
        if(a<b){
          for(int i=0; i<100; i++){
            if(a>=b){
              break;
            }else{
              a+=c;
              b-=c;
              count++;
            }
          }
        }else{
          for(int i=0; i<100; i++){
            if(a<=b){
              break;
            }else{
              b+=c;
              a-=c;
              count++;
            }
          }
        }
        cout<<count<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
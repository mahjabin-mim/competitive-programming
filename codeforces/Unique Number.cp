#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int x;
      cin>>x;
      
      if(x>0 && x<10){
        cout<<x<<endl;
      }
      else{
        string ans="";
        int temp=9;
        for(int i=0; i<50; i++){
          int y=min(temp,x);
          temp-=1;
          ans+=to_string(y);
          x-=y;
          if(x<=0){
            break;
          }
        }
        
        if(x>0){
          cout<<-1<<endl;
        }else{
          sort(ans.begin(), ans.end());
          bool flag=true;
          for(int i=0; i<ans.length()-1; i++){
            if(ans[i]==ans[i+1]){
              flag=false;
              break;
            }
          }
          if(flag){
            cout<<ans<<endl;
          }else{
            cout<<-1<<endl;
          }
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
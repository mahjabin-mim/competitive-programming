#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int n,m,k;
      cin>>n>>m>>k;
      
      int x,y;
      cin>>x>>y;
      bool flag=false;
      while(k--){
        int a,b,c;
        cin>>a>>b;
        c=abs(x-a)+abs(y-b);
        if(c%2==0){
          flag=true;
        }
      }
      
      if(flag){
        cout<<"NO"<<endl;
      }else{
        cout<<"YES"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
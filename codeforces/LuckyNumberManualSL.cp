#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int l,r,ans,maxAns,luckyNum;
       cin>>l>>r;
       
       char max,min;
       maxAns=0;
       for(int j=l; j<=r; j++){
         
         string s=to_string(j);
         
         max='0',min='9';
         for(int i=0; i<=s.length()-1; i++){
         
          if(s[i]>=max){
            max=s[i];
          }
          
          if(s[i]<=min){
            min=s[i];
          }
        }
        
        ans=int(max-min);
        
        if(maxAns<=ans){
          
          maxAns=ans;
          luckyNum=j;
        }
       }
       
       cout<<luckyNum<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
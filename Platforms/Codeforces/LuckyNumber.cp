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
         sort(s.begin(),s.end());
         
         min=s[0];
         max=s[s.length()-1];
         ans=int(max-min);
         
         if(maxAns<=ans){
          
           maxAns=ans;
           luckyNum=j;
           max='0',min='0';
         }
         if(maxAns==9){
           break;
         }
       }
       
       cout<<luckyNum<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
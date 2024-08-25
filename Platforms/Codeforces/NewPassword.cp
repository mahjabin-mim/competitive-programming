#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,k;
    cin>>n>>k;
    
    string alp="abcdefghijklmnopqrstuvwxyz";
    string s1="";
    
    for(int i=0; i<k; i++){
      s1+=alp[i];
    }
    
    if(n>k){
      string s2="";
      for(int i=0; i<n; i++){
        s2+=s1[i];
        
        if(s2.length()==n){
          break;
        }
        if(i==s1.length()-1){
          i=-1;
        }
      }
      cout<<s2<<endl;
    }else{
      cout<<s1<<endl;
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
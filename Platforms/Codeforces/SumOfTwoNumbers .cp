#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
      }else{
        if(n%20==19){
          string str=to_string(n);
          string s1="",s2="";
          int c=0,d=0;
          for(int i=0; i<str.length(); i++){
            int a=(str[i]-'0')/2;
            int b=(str[i]-'0')-a;
            int mx=max(a,b);
            int mn=min(a,b);
            if(c<=d){
              s1+=to_string(mx);
              s2+=to_string(mn);
              c+=mx;
              d+=mn;
            }else{
              s1+=to_string(mn);
              s2+=to_string(mx);
              c+=mn;
              d+=mx;
            }
          }
          cout<<stoi(s1)<<" "<<stoi(s2)<<endl;
        }
        else{
          cout<<n/2<<" "<<n/2+1<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
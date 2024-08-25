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
      
      string s1;
      cin>>s1;
      
      if(n==1){
        cout<<s1<<endl;
      }else{
        int idx;
        int mn=INT_MAX;
        char c;
        for(int i=s1.length()-1; i>0; i--){
          int temp=s1[i]-'0';
          if(temp<mn){
            mn=temp;
            idx=i;
            c=s1[i];
          }
        }
      
        string s2="";
        s2+=c;
        for(int i=0; i<s1.length(); i++){
          if(i!=idx){
            s2+=s1[i];
          }
        }
      
        int a=s2[0]-'0'; 
        int b=s2[1]-'0';
        if(a<=b){
          cout<<s2<<endl;
        }else{
          cout<<s1<<endl;
        }
      }
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
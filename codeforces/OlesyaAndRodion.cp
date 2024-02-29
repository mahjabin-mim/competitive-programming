#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n,t;
    cin>>n>>t;
    
    string a=to_string(t);
    if(n==1 && a.length()>1){
      cout<<-1<<endl;
    }else{
      string s="";
      s+=a;
      for(int i=0; i<(n-a.length()); i++){
        s+='0';
      }
      cout<<s<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
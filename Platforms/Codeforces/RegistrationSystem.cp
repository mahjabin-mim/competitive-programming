#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    map <string,int> map;
    while(t--){
      string s;
      cin>>s;
      
      if(map[s]==0){
        map[s]++;
        cout<<"OK"<<endl;
      }else{
        cout<<s<<map[s]<<endl;
        map[s]++;
      }
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
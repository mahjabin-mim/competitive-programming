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
      
      char c;
      map <char,int> map;
      for(int i=0; i<n; i++){
        cin>>c;
        map[c]++;
      }
      
      int count=0;
      for(auto i : map){
        int a=i.second+1;
        count+=a;
      }
      cout<<count<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
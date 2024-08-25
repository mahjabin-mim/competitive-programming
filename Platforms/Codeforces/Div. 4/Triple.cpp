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
    
      map <int,int> map;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        map[a]++;
      }
      
      int ans=-1;;
      for(auto i : map){
        int a=i.second;
        if(i.second>=3){
          ans=i.first;
          break;
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
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
    
      int sum=0;
      int mn=INT_MAX;
      map <int,int> map;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        mn=min(mn,a);
        sum+=a;
        map[a]++;
      }
      
      if(map[mn]==n){
        cout<<0<<endl;
      }else{
        int ans=sum-(n*mn);
        cout<<ans<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n,k;
      cin>>n>>k;
      
      map<int,int> map;
      for(int i=0; i<n; i++){
        char c;
        cin>>c;
        map[c]++;
      }
      
      int ans=0;
      for(auto i : map){
        if(i.second>0){
          if(i.first>=97){
            int a=map[i.first];
            int b=map[i.first-32];
            int c=min(a,b);
            ans+=c;
            map[i.first]-=c;
            map[i.first-32]-=c;
            if(k!=0){
              c=map[i.first]/2;
              if(c>k){
                ans+=k;
                k=0;
              }else{
                ans+=c;
                k-=c;
              }
            }
          }else{
            int a=map[i.first];
            int b=map[i.first+32];
            int c=min(a,b);
            ans+=c;
            map[i.first]-=c;
            map[i.first+32]-=c;
            if(k!=0){
              c=map[i.first]/2;
              if(c>k){
                ans+=k;
                k=0;
              }else{
                ans+=c;
                k-=c;
              }
            }
          }
        }
      }
      cout<<ans<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
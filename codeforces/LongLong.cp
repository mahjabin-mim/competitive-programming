#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       long long n;
       cin>>n;
       
       long long sum=0;
       long long op=0;
       vector<int> v;
       for(int i=0; i<n; i++){
         
        int x;
        cin>>x;
         
        if(x!=0){
          v.push_back(x);
        }
        
        sum+=abs(x);
       }
      
      for(int i=0; i<v.size()-1 && v.size()>0; i++){
         
        if(v[i]<0 && v[i+1]>0){
          op++;
        }
      }
      
      if(v.size()!=0 && v[v.size()-1]<0){
          op++;
        }
       
      cout<<sum<<" "<<op<<endl;
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
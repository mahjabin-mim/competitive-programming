#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    
    while(t--){
      
      long long n,m;
      cin>>n>>m;
      
      long long sum1=0;
      for(long long i=0; i<n; i++){
        long long a;
        cin>>a;
        sum1+=a;
      }
      
      long long sum2=0;
      for(long long i=0; i<m; i++){
        long long b;
        cin>>b;
        sum2+=b;
      }
      
      if(sum1>sum2 || sum2==0){
        cout<<"Tsondu"<<endl;
      }
      else if(sum1<sum2 || sum1==0){
        cout<<"Tenzing"<<endl;
      }else{
        cout<<"Draw"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
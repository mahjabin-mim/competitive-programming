#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    
    long long a=n/2;
    
    if(a>=k && n%2==0){
      long long val=1;
      for(int i=1; i<k; i++){
        val+=2;
      }
      cout<<val<<endl;
    }else if(a<k && n%2==0){
      long long val=2;
      for(long long i=a+1; i<k; i++){
        val+=2;
      }
      cout<<val<<endl;
    }else if(a+1>=k && n%2!=0){
      long long val=1;
      for(int i=1; i<k; i++){
        val+=2;
      }
      cout<<val<<endl;
    }else if(a+1<k && n%2!=0){
      long long val=2;
      for(long long i=a+2; i<k; i++){
        val+=2;
      }
      cout<<val<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
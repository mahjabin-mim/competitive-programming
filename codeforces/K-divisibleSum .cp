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
      
      if(n==1){
        cout<<k<<endl;
      }else if(n==k){
        cout<<1<<endl;
      }else if(n<k){
        int a = k/n;
        int b = k%n;
        if(b!=0){
          a+=1;
        }
        cout<<a<<endl;
      }else{
        int c = n/k;
        int d = n%k;
        if(d!=0){
          c+=1;
        }
        k=k*c;
        int a = k/n;
        int b = k%n;
        if(b!=0){
          a+=1;
        }
        cout<<a<<endl;
      }
      
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
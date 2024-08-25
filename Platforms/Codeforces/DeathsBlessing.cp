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
       
       long long a[n+10];
       long long b[n+10];
       long long sec=0;
       long long max=0;
       
       for(int i=1; i<=n; i++){
         cin>>a[i];
         sec+=a[i];
       }
       
       for(int j=1; j<=n; j++){
         cin>>b[j];
         sec+=b[j];
         
         if(b[j]>=max){
           max=b[j];
         }
       }
       
       if(n==1){
         cout<<a[1]<<"\n";
       }else{
         sec-=max;
         cout<<sec<<endl;
       }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
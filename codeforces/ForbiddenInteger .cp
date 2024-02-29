#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int n,k,x;
      cin>>n>>k>>x;
      
      if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i=1; i<=n; i++){
          cout<<"1 ";
        }
        cout<<endl;
      }
      
      else if(n!=1 && k==2){
        if(n%2==0){
          int a=n/2;
          cout<<"YES\n";
          cout<<a<<endl;
          for(int i=1; i<=a; i++){
            cout<<"2 ";
          }
          cout<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      
      else if(n!=1 && k>=3){
        if(n%k==0){
          int a=n/k;
          cout<<"YES\n";
          cout<<a<<endl;
          for(int i=1; i<=a; i++){
            cout<<k<<" ";
          }
          cout<<endl;
        }
        else if(n%2==0){
          int a=n/2;
          cout<<"YES\n";
          cout<<a<<endl;
          for(int i=1; i<=a; i++){
            cout<<"2 ";
          }
          cout<<endl;
        }
        else if(n%2!=0){
          int a=(n/2)-1;
          cout<<"YES\n";
          cout<<a+1<<endl;
          for(int i=1; i<=a; i++){
            cout<<2<<" ";
          }
          cout<<3<<endl;
        }
      }
      
      else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
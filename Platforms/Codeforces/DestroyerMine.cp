#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       int n;
       cin>>n;
       
       int arr[n];
       string rob="";
       bool flag=true;
       
       for(int i=0; i<n; i++){
         cin>>arr[i];
       }
       
       sort(arr,arr+n);
      
      if(arr[0]!=0){
        cout<<"No\n";
      }
       
      else{
        
        if(flag==true){
          
          for(int i=0; i<n-1; i++){
            
            if(arr[i]!=arr[i+1] && arr[i]+1!=arr[i+1]){
              
              flag=false;
              break;
            }
          }
        }
        
        if(flag==true){
          int c=0;
          int count=0;
       
          for(int i=0; i<n; i++){
          
            int a = arr[i];
        
              if(a!=c){
                rob+=to_string(count);
                c+=1;
                count=0;
              }
              if(a==c){
                count++;
              }
          }
        
          rob+=to_string(count);
        
          for(int i=0; i<rob.length()-1; i++){
        
            int a=rob[i+1] - '0';
            int b=rob[i] - '0';
            
            if(a <= b){
              flag=true;
            }
            else{
              flag=false;
              break;
            }
          }
        }
        
       
        if(flag==true){
          cout<<"Yes\n";
        }
        else{
          cout<<"No\n";
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
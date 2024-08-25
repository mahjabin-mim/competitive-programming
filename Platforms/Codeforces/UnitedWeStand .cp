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
      int countb=0,countc=0;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr[i]=a;
        
        if(a%2==0){
          countb++;
        }else{
          countc++;
        }
      }
      sort(arr,arr+n);
      
      if(countb>0 && countc>0){
        vector <int> b;
        vector <int> c;
        for(int i=0; i<n; i++){
          if(arr[i]%2==0){
            c.push_back(arr[i]);
          }else{
            b.push_back(arr[i]);
          }
        }
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto i : b){
          cout<<i<<" ";
        }cout<<endl;
        for(auto i : c){
          cout<<i<<" ";
        }cout<<endl;
      }
      else{
        vector <int> b;
        vector <int> c;
        for(int i=n-1; i>=0; i--){
          int a=arr[n-1];
          if(arr[i]==a){
            c.push_back(arr[i]);
          }else{
            b.push_back(arr[i]);
          }
        }
        if(b.size()==n || c.size()==n){
          cout<<-1<<endl;
        }else{
          cout<<b.size()<<" "<<c.size()<<endl;
          for(auto i : b){
            cout<<i<<" ";
          }cout<<endl;
          for(auto i : c){
            cout<<i<<" ";
          }cout<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
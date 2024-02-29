#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;


int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      int n,q;
      cin>>n>>q;
      
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      
      sort(arr,arr+n,greater<>());
      long long sum[n];
      long long s=0;
      for(int i=0; i<n; i++){
        s+=arr[i];
        sum[i]=s;
      }
      
      int x;
      for(int i=0; i<q; i++){
        cin>>x;
        if(s<x){
          cout<<-1<<endl;
        }
        else if(sum[0]>x){
          cout<<1<<endl;
        }
        else{
          int l=0;
          int r=n-1;
          while(l<=r){
            int mid=(l+r)/2;
            if(sum[mid]==x){
              r=mid-1;
            }else if(sum[mid]>x){
              r=mid-1;
            }else{
              l=mid+1;
            }
          }
          
          cout<<l+1<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
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
      
      int arr[n+1];
      arr[0]=0;
      int totalSum=0;
      for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        arr[i]=arr[i-1]+a;
        totalSum+=a;
      }
      
      while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        
        int sum=totalSum;
        sum-=(arr[r]-arr[l-1]);
        sum+=((r-l+1)*k);
        
        if(sum%2!=0){
          cout<<"YES"<<endl;
        }else{
          cout<<"NO"<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
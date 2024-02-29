#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,k,x;
      cin>>n>>k>>x;
      
      if(n<k || (k-1)>x){
        cout<<-1<<endl;
      }else{
        int sum=0;
        int count=1;
        for(int i=1; i<k; i++){
          sum+=i;
          count++;
        }
        int y=n-count;
        if(k==x){
          for(int i=0; i<y; i++){
            sum+=(x-1);
          }
        }else{
          for(int i=0; i<y; i++){
            sum+=x;
          }
        }
        cout<<sum<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
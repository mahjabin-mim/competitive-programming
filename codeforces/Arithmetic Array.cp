#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
        optimized
        int t;
	      cin>>t;
	      
	      while(t--){
		      int n;
		      cin>>n;
		      int sum=0;
		      for (int i=0; i<n; i++){
			      int a;
			      cin>>a;
			      sum+=a;
		      }
		      
          if(sum<n){
            cout<<"1\n";
          }
          else{
             cout<<sum-n<<"\n";
	        }
        }
        
        return 0;
}
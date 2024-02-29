#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        long long n,k;
        cin>>n>>k;
        
        long long need;
        need=(n-k);
        
        if(n%k==0 || n%2==0 || need%2==0){
          cout<<"Yes\n";
        }
        else{
          cout<<"No\n";
        }
        

    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
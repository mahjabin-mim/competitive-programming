#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        int n,k,l,r;
        cin>>n>>k;
        
        int segment=n;
        int countL=0;
        int countR=0;
        
        while(n--){
          
          cin>>l>>r;
          
          if(segment==1 && l!=r){
            break;
          }
          else{
            if(k==l){
              countL++;
            }
            if(k==r){
              countR++;
            }
          }
        }
        
        if(countL>=1 && countR>=1){
          cout<<"Yes\n";
        }else{
          cout<<"No\n";
        }

    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
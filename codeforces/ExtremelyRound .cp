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
      
      if(n>=1 && n<=9){
        cout<<n<<endl;
      }else if(n>=10 && n<=99){
        int count=9;
        for(int i=10; i<=n; i+=10){
          count++;
        }
        cout<<count<<endl;
      }else if(n>=100 && n<=999){
        int count=9*2;
        for(int i=100; i<=n; i+=100){
          count++;
        }
        cout<<count<<endl;
      }else if(n>=1000 && n<=9999){
        int count=9*3;
        for(int i=1000; i<=n; i+=1000){
          count++;
        }
        cout<<count<<endl;
      }else if(n>=10000 && n<=99999){
        int count=9*4;
        for(int i=10000; i<=n; i+=10000){
          count++;
        }
        cout<<count<<endl;
      }else if(n>=100000 && n<=999999){
        int count=9*5;
        for(int i=100000; i<=n; i+=100000){
          count++;
        }
        cout<<count<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
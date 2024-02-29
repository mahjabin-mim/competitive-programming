#include <bits/stdc++.h>
#include <cmath>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int a,b;
    cin>>a>>b;
    
    for(int i=1; b*i<=a; i++){
      a++;
    }
    cout<<a<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
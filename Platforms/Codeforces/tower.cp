#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    
    map<int,int> map;
    int mx=0;
    for(int i=0; i<n; i++){
      cin>>x;
      map[x]++;
      
      mx=max(mx,map[x]);
    }
    
    cout<<mx<<" "<<map.size()<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
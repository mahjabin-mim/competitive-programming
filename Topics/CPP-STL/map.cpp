
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    map <string,int> map;
    while(t--){
      string s;
      cin>>s;
      map[s]++;
    }
    
    int score=0;
    string team="";
    for(auto i:map){
      if(i.second>score){
        score=i.second;
        team=i.first;
      }
    }
    cout<<team<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	

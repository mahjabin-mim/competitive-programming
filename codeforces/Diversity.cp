#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string s;
    cin>>s;
    int n;
    cin>>n;
    
    set <char> set; 
    int count=0;
    for(int i=0; i<s.length(); i++){
      set.insert(s[i]);
      count++;
    }
    
    if(count<n){
       cout<<"impossible"<<endl;
    }else{
      if(set.size()>=n){
        cout<<0<<endl;
      }else{
        int ans=n-set.size();
        cout<<ans<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
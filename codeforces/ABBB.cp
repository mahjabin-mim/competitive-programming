#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while (t--){
      string s;
      cin>>s;
      
      stack <char> st;
      for(int i=0; i<s.length(); i++){
        if(st.empty() || s[i]=='A'){
          st.push(s[i]);
        }else if(s[i]=='B' && st.top()=='A'){
          st.pop();
        }else if(s[i]=='B' && st.top()=='B'){
          st.pop();
        }
      }
      cout<<st.size()<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	    	 	
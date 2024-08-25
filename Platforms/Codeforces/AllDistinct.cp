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
      
      set <int> set;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        set.insert(a);
      }
      
      if(set.size()==n){
        cout<<n<<endl;
      }else{
        int a = n-set.size();
        if(a%2==0){
          cout<<set.size()<<endl;
        }else{
          cout<<set.size()-1<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
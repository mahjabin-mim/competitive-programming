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
      string s;
      cin>>s;
      
      set <char> set1;
      set <char> set2;
      int arr1[n];
      int arr2[n];
      
      int i=0;
      int j=n-1;
      while(i<n && j>=0){ 
        set1.insert(s[i]);
        set2.insert(s[j]);
        arr1[i]=set1.size();
        arr2[j]=set2.size();
        i++;
        j--;
      }  
      
      int mx=0;
      for(int k=0; k<n-1; k++){
        mx=max(mx,arr1[k]+arr2[k+1]);
      }
      cout<<mx<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
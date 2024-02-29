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
      
      string arr[n];
      map <string,int> map;
      for(int i=0; i<n; i++){
        cin>>arr[i];
        map[arr[i]]++;
      }
      
      string str="";
      for(int i=0; i<n; i++){
        string s=arr[i];
        string s1="";
        string s2="";
        bool flag=true;
        for(int j=0; j<s.length(); j++){
          s1+=s[j];
          s2="";
          for(int k=j+1; k<s.length(); k++){
            s2+=s[k];
          }
          if(map[s1]>=1 && map[s2]>=1){
            str+="1";
            flag=true;
            break;
          }else{
            flag=false;
          }
        }
        if(flag==false){
          str+="0";
        }
      }
      cout<<str<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    int t;
    cin>>t;
    
    while(t--){
      string s1,s2;
      cin>>s1;
      s2=s1;
      
      long long p;
      cin>>p;
      
      sort(s2.begin(),s2.end());
      long long price=0;
      string str="";
      map <char,int> map;
      for(int i=0; i<s2.length(); i++){
        int a = s2[i]-96;
        int b = p-price;
        if(a<=b){
          price+=a;
          str+=s2[i];
          map[s2[i]]++;
        }else{
          break;
        }
      }
      
      if(str!=""){
        for(int i=0; i<s1.length(); i++){
          int x = map[s1[i]];
          if(x>0){
            cout<<s1[i];
            map[s1[i]]--;
          }
        }
        cout<<endl;
      }
      else{
        cout<<str<<endl;
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int i = s.find('h');

    if(i != -1){
      
      i = s.find('e', i+1);
      if(i != -1){
        
        i = s.find('l', i+1);
        if(i != -1){
          
          i = s.find('l', i+1);
          if(i != -1){
            
            i = s.find('o', i+1);
            if(i != -1){
              cout<<"YES\n";
            }
            else{
              cout<<"NO\n";
            }
          }
          else{
            cout<<"NO\n";
          }
        }
        else{
          cout<<"NO\n";
        }
      }
      else{
        cout<<"NO\n";
      }
    }
    else{
      cout<<"NO\n";
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
       string s;
       cin>>s;
       
       int one=0;
       vector<int> score;
       
       for(int i=0; i<=s.length()-1; i++){
         if(s[i]=='1'){
           one++;
         }
         if(s[i]=='0' && one>0){
           score.push_back(one);
           one=0;
         }
         if(i==s.length()-1 && s[i]=='1'){
           score.push_back(one);
           one=0;
         }
       }
       
       sort(score.begin(),score.end());
       
       int alice=0;
       for(int j=score.size()-1; j>=0; j-=2){
         
         alice+=score[j];
        
       }
       
       cout<<alice<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
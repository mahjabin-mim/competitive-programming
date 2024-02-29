#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int m,s;
    cin>>m>>s;
    
    if(s==0 && m>1){
      cout<<-1<<" "<<-1<<endl;
    }
    else if(s==0 && m==1){
      cout<<0<<" "<<0<<endl;
    }
    else{
      string s1="";
      for(int i=0; i<m; i++){
        int a=min(9,s);
        s1+=to_string(a);
        s-=a;
      }
      if(s>0){
        cout<<-1<<" "<<-1<<endl;
      }
      else{
        string s2=s1;
        reverse(s2.begin(), s2.end());
        
        int zero=0;
        for(int j=0; j<m; j++){
          if(s2[j]!='0'){
            break;
          }else{
            zero++;
          }
        }
        
        if(zero>0){
          string min="";
          min+="1";
          for(int i=0; i<zero-1; i++){
            min+="0";
          }
          for(int i=zero; i<s2.length(); i++){
            if(i==zero){
              int x=s2[i]-'0';
              x-=1;
              s2[i]=x+'0';
            }
            min+=s2[i];
          }
          cout<<min<<" "<<s1<<endl;
        }
        else{
          cout<<s2<<" "<<s1<<endl;
        }
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
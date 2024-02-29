#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

bool allCharactersSame(string s)
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    string arr[n];
    bool flag=false;
    map <char,bool> map;
    for(int i=0; i<n; i++){
      string s;
      cin>>s;
      arr[i]=s;
      map[s[0]]=true;
      if(allCharactersSame(s)){
        flag=true;
      }
    }
    
    if(flag){
      cout<<"Y\n";
    }else{
      for(int i=0; i<n; i++){
        string a=arr[i];
        int b=a.length();
        int count=0;
        for(char j : a){
          count+=map[j];
          if(count==b){
            flag=true;
            break;
          }
        }
      }
      
      if(flag){
        cout<<"Y\n";
      }else{
        cout<<"N\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
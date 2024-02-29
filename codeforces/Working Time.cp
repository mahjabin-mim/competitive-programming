#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int removeColon(string s)
{
    if (s.size() == 4)
        s.replace(1, 1, "");
     
    if (s.size() == 5)
        s.replace(2, 1, "");
     
    return stoi(s);
}

string diff(string s1, string s2)
{
    int time1 = removeColon(s1);
    int time2 = removeColon(s2);
  
    int hourDiff = time2 / 100 - time1 / 100 - 1;
    int minDiff = time2 % 100 + (60 - time1 % 100);
 
    if (minDiff >= 60) {
        hourDiff++;
        minDiff = minDiff - 60;
    }
    
    hourDiff=hourDiff*60;
    int r=hourDiff+minDiff;
    string res = to_string(r);
    return res;
}

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,m;
      cin>>n>>m;
  
      int ans=0;
      while(n--){
        string s;
        string e;
        cin>>s>>e;
        ans+=stoi(diff(s,e));
      }
      
      int minimum=m*60;
      if(ans>=minimum){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
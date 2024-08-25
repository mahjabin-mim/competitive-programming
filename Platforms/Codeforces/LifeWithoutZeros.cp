#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int a,b;
    cin>>a;
    cin>>b;
    
    long long sum=a+b;
    string s1=to_string(a);
    string s2=to_string(b);
    string sum1=to_string(sum);
    string str1="";
    string str2="";
    string sum2="";
    for (char c : s1) {
      if (c!='0') {
        str1+=c;
      }
    }
    for (char c : s2) {
      if (c!='0') {
        str2+=c;
      }
    }
    for (char c : sum1) {
      if (c!='0') {
        sum2+=c;
      }
    }
    
    a=stoi(str1);
    b=stoi(str2);
    sum=stoi(sum2);
    if(a+b==sum){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
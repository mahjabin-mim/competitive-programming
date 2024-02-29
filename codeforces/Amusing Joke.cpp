#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    
    string ans=s1+s2;
    sort(ans.begin(),ans.end());
    sort(s3.begin(),s3.end());
    
    if(ans==s3){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }

    return 0;
}
                                                            
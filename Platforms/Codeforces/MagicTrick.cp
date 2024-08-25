#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int n;
    cin>>n;
    
    vector< pair <string,int> > v;
    for(int i=0; i<n; i++){
      string s;
      int x;
      cin>>s>>x;
      v.push_back( make_pair(s,x) );
    }
    
    int count=0;
    for(int i=100; i>0; i--){
      int ans=i;
      for (int j=0; j<n; j++){
        if(v[j].first=="ADD"){
          ans+=v[j].second;
        }else if(v[j].first=="SUBTRACT"){
          ans-=v[j].second;
          if(ans<0){
            count++;
            break;
          }
        }else if(v[j].first=="MULTIPLY"){
          ans*=v[j].second;
        }else if(v[j].first=="DIVIDE"){
          if(ans%v[j].second!=0){
            count++;
            break;
          }else{
            ans/=v[j].second;
          }
        }
      }
    }
    cout<<count<<endl;
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
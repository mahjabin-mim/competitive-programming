#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2){
  
    if(p1.first<p2.first){
      return true;
    }else if(p1.first==p2.first && p1.second>p2.second){
      return true;
    }else{
      return false;
    }
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      long long n,k;
      cin>>n>>k;
      
      vector<pair<int, int>> arr;
      for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a%k==0){
          cout<<i+1<<" ";
          arr.push_back({0, i+1});
        }else{
          int b=a%k;
          arr.push_back({b, i+1});
        }
      }
      
      sort(arr.begin(), arr.end(), cmp);
      for(int i=n-1; i>=0; i--){
        if(arr[i].first==0){
          break;
        }else{
          cout<<arr[i].second<<" ";
        }
      }
      cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n,k;
      cin>>n>>k;
      
      vector<pair<int,int>> a;
      for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
      }
      sort(a.begin(), a.end());
      
      int b[n];
      for(int i=0; i<n; i++){
        cin>>b[i];
      }
      sort(b,b+n);
      
      int arr[n];
      for(int i=0; i<n; i++){
        int x=a[i].second;
        int y=b[i];
        arr[x]=y;
      }
      
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	

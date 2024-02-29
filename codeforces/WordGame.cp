#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      map <string,int> map;
      string arr[3][n];
      for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
          cin>>arr[i][j];
          map[arr[i][j]]++;
        }
      }
      
      int point1=0, point2=0, point3=0;
      for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
          if(map[arr[i][j]]==2){
            if(i==0){
              point1+=1;
            }else if(i==1){
              point2+=1;
            }else{
              point3+=1;
            }
          }else if(map[arr[i][j]]==1){
            if(i==0){
              point1+=3;
            }else if(i==1){
              point2+=3;
            }else{
              point3+=3;
            }
          }
        }
      }
      cout<<point1<<" "<<point2<<" "<<point3<<endl;
    }
   
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
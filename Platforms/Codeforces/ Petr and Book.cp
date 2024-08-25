#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
  optimized
  int n;
  cin>>n;
  
  int arr[7];
  for(int i=0; i<7; i++){
    cin>>arr[i];
  }
  
  int count=0;
  int i=0;
  while(n>0){
    count++;
    n-=arr[i%7];
    i++;
    
    if(n<=0){
      break;
    }
  }
  
  if(count%7==0){
    cout<<7<<endl;
  }else{
    cout<<count%7<<endl;
  }
        
  return 0;
}
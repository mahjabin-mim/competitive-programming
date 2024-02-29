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

        string s;
        cin>>s;

        if(n%2!=0){
            cout<<-1<<endl;
        }else{
            int count=0;
            vector <int> v;
            int i=0;
            int j=s.length()-1;
            while(i<j){
                if(s[i]=='0' && s[j]=='0'){
                    if(j==s.length()-1){
                        s+="01";
                    }else{
                        s.insert(j+1,"01");
                    }
                    v.push_back(j+1);
                    count++;
                    i=0;
                    j=s.length()-1;
                }else if(s[i]=='1' && s[j]=='1'){
                    s.insert(i,"01");
                    v.push_back(i);
                    count++;
                    i=0;
                    j=s.length()-1;
                }else{
                    i++;
                    j--;
                }

                if(count>300){
                    break;
                }    
            }

            if(count>300){
                cout<<-1<<endl;
            }else{
                cout<<count<<endl;
                for(auto i:v){
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }
    
    return 0;
}
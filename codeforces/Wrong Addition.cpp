#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int t;
    cin>>t;
    
    while(t--){
        string a,s;
        cin>>a>>s;

        if(a==s){
            cout<<0<<endl;
        }else if(s.length()<a.length()){
            cout<<-1<<endl;
        }else{
            string ans;
            int x=s.length()-1;
            for(int i=a.length()-1; i>=0; i--){
                if(x<0){
                    ans="-1";
                    break;
                }

                int l=a[i]-'0';
                int r=s[x]-'0';
                string z;
     
                if(l==r){
                    z+='0';
                    ans=z+ans;
                }else if(l<r){
                    int xx=r-l;
                    z+=(xx+'0');
                    ans=z+ans;
                }else{
                    int n=s[x]-'0';
                    x--;
                    if(x<0){
                        ans="-1";
                        break;
                    }else{
                        n=(s[x]-'0')*10 + n;
                        int m=n-l;
                        if(m<0 || m>9){
                            ans="-1";
                            break;
                        }else{
                            z+=(m+'0');
                            ans=z+ans;
                        }
                    }
                }
                x--;
            }

            string z;
            for(int i=0;i<=x;i++){
                z+=s[i];
            }

            if(ans!="-1"){
                ans=z+ans;
            }

            while(ans[0]=='0')
            {
                ans.erase(ans.begin());
            }
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
                                                            
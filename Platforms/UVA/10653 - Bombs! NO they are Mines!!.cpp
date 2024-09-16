/**
 *    author:  Mahjabin7
 *    created: 10.09.2024 22:02:36
**/
#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(nullptr);
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int arr[1000+7][1000+7] = {0};
const int x[4] = {1, -1, 0, 0};
const int y[4] = {0, 0, 1, -1};

int bfs(pair <int,int> s, pair <int,int> d, int r,int c)
{
    bool visited[1000][1000]={false};
    int level[1000][1000]={0};
    queue < pair<int,int> > q;
    q.push(s);
    visited[s.first][s.second]=1;
    level[s.first][s.second]=0;

    while(!q.empty()){
        pair <int,int> u = q.front();
        q.pop();

        for(int v=0; v<4; v++){
            int row = u.first+x[v];
            int col = u.second+y[v];
            if(row>=0 && row<r && col>=0 && col<c && !visited[row][col] && arr[row][col]==0){
                q.push({row,col});
                visited[row][col] = 1;
                level[row][col] = level[u.first][u.second]+1;
                
                pair <int,int> des = make_pair(row,col);
                if(des == d){
                    return level[row][col];
                }
            }
        }
    }
    
    return 0;
}

int main() 
{    
    optimized
    int r,c;
    while(cin>>r>>c && r!=0 && c!=0){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            int row,col;
            cin>>row>>col;
            for(int j=0; j<col; j++){
                int x;
                cin>>x;
                arr[row][x] = -1;
            }
        }

        pair <int,int> s;
        pair <int,int> d;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        s = make_pair(x1,y1);
        d = make_pair(x2,y2);

        cout<<(bfs(s,d,r,c))<<endl;

        for(int i=0; i<1000; i++){
            for(int j=0; j<1000; j++){
                arr[i][j]=0;
            }
        }
    }
 
    return 0;
}

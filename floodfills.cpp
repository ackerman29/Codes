#include<bits/stdc++.h>
using namespace std;
const int N = 1e2;
vector<int> g[N];
bool vis[N];

//4 sections in dfs to write code
//every section has a definition
void dfs(int i,int j,int initialcolour, int newcolor,vector<vector<int>>&image){
    int n=image.size();
    int m=image[0].size();
    if(i<0 || j<0)return;
    if(i>=n || j>=m) return ;
    if(image[i][j]!=initialcolour) return;
    image[i][j]=newcolor;
    /* Take action on vertex after entering the vertex */
    //if(vis[vertex]) return; //this can be written if inside for we havent written vis child condn
   
        /* Take action on child before entering the child node */
        dfs(i-1,j,initialcolour,newcolor,image);
        dfs(i+1,j,initialcolour,newcolor,image);
        dfs(i,j-1,initialcolour,newcolor,image);
        dfs(i,j+1,initialcolour,newcolor,image);
        /* Take action on child after existing the child node */
    }
    /* Take action on child before existing the vertex */
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int initialcolour=image[sr][sc];
        if(initialcolour!=newcolor)
            dfs(sr,sc,initialcolour,newcolor,image);
        return image;
    }

int main(){
    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e2;
vector<int> g[N];
bool vis[N];

//4 sections in dfs to write code
//every section has a definition
bool dfs(int vertex,int parent){
    /* Take action on vertex after entering the vertex */
    //if(vis[vertex]) return; //this can be written if inside for we havent written vis child condn
    vis[vertex] = true;
    bool isloopexists=false;

    for(int child:g[vertex]){
       
        if(vis[child] && child == parent) continue;
        if(vis[child]) return true;
        /* Take action on child before entering the child node */
        isloopexists|=dfs(child,vertex);
        /* Take action on child after existing the child node */
    }
    
    return isloopexists;
    /* Take action on child before existing the vertex */
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
    bool 
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
        {
            continue;
        }
        if(dfs
        {
            if (isloopexists)
        }
    }
    
return 0;
}
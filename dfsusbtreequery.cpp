#include<bits/stdc++.h>
using namespace std;
const int N=1e2;
vector<int>g[N];
int depth[N], height[N];
int sumquery[N];
int evencount[N];
//4 sections in dfs to write code
//every section has a definition
void dfs(int vertex,int parent=0)
{
	/* Take action on vertex after entering the vertex */
    //if(vis[vertex]) return; //this can be written if inside for we havent written vis child condn
	if(vertex%2==0)
	{
		sumquery[vertex]++;
	}
	int sumquery[vertex]+=vertex;
	for(int child: g[vertex] )
	{
		
		if(child==parent)
		{
			continue;
		}
		dfs(child,vertex);
		sumquery[vertex]+=sumquery[child];
		evencount[vertex]+=evencount[child];

	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);

	}
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		cout<<depth[i]<<" "<<height[i]<<endl;
	}
return 0;
}




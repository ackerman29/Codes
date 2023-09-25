#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{


	int n,m;
	cin>>n>>m;
	vector<string>l(m);
	for(int i=0;i<n;i++)
	{
		string k;
		cin>>k;
		l.push_back(k);
	}
	int c=0;
	string ok="vika";
	for(int i=0;i<m;i++)
	{
	for(auto it:l)
	{
		if(it[i]==ok[c])
		{
			c++;
			break;
		}
	}if(c==4)
	{
		break;
	}
}
	if(c==4)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
return 0;
}
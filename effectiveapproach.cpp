#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,v;
	cin>>n>>v;
	set<int>ok;
	int c;
	while(n--)
	{
	int k;
	cin>>k;
	int s[k];
	c=0;
	
	for(int i=1;i<=k;i++)
	{
		cin>>s[i];
		if(s[i]<v)
		{
			c++;
			ok.insert(i);
		}
		else{}
	}

	}
	cout<<c<<endl;
	for(auto it:ok)
	{
		cout<<it;
	}
	

return 0;
}
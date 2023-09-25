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
	char a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cout<<i<<endl;
		for(int j=i;j<m;j++)
		{
			if(a[j][i]=='v')
			{
				flag+=1;
				cout<<j<<i<<endl;
				//break;
			}
			else if(a[j][i]=='i')
			{
				flag+=1;
				cout<<a[j][i]<<endl;
				cout<<j<<i<<endl;
				//break;
			}
			else if(a[j][i]=='k')
			{
				flag+=1;
				cout<<a[j][i]<<endl;
				cout<<j<<i<<endl;
				//break;
			}
			else if(a[j][i]=='a')
			{
				flag+=1;
				cout<<a[j][i]<<endl;
				cout<<j<<i<<endl;
				//break;
			}
			else
			{
				flag+=0;
				cout<<j<<i<<endl;
			}
			

		}
	}
	// if(flag%4==0)
	if(flag==4)
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
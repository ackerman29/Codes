#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,q;
	cin>>n>>a>>q;
	string s;
	cin>>s;
	bool flagpos= false;
	bool flagneg= false;
	int c=0;
	if(n==a)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='+')
			{
				a++;
				if(a>=n)
				{
					flag=true;break;
				}
			}
			if(s[i]=='-')
			{
				a--;
				
			}
		}
	}
	if(flagpos==true && flagneg==false)
	{
		cout<<"MAYBE"<<endl;
	}
	else if(flagpos ==false and flagneg== false)
	{
		cout<<"NO"<<endl;
	}

return 0;
}
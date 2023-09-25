#include<bits/stdc++.h>
using namespace std;
string reverseit(string input)
	{
		stack<char>stackchar;
		for(char c: input)
		{
			stackchar.push(c);
		}
		string store;
		while(!stackchar.empty())
		{
			store+=stackchar.top();
			stackchar.pop();
		}
		return store;
	}
int main()
{
	string s;
	cin>>s;
	string k;
	k=reverseit(s);
	cout<<k;
return 0;
}
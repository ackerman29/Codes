#include<bits/stdc++.h>
using namespace std;
bool issort(vector<int>&ok)
{
	return is_sorted(ok.begin(),ok.end());
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		
	}
	  if (issort(ans)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
	
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int d;
    vector<int>list;
    while(n>0)
    {
        d=n%10;
        if(d==x)
        {
            list.push_back(d);
        }
        else
        {
        x=9-d;
        list.push_back(x);
        }
        n=n/10;

    }
    for(int i=0;i<list.size();i++)
    {
        cout<<list[i]<<"";
    }

return 0;
}
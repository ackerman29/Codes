#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin>>s;
    cin>>c;
    int flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(c!=s[i])
        {
            cout<<"NO"
        }
        if(c==s[i] && c==(i%2!=0))
        {
            cout<<"NO";
            break;
        }
        else if(c==s[i])
        {
            cout<<"YES";
            break;
        }
    }

return 0;
}
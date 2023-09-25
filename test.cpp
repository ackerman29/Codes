#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>ok;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
            ok.push_back(x);
        }
        int cost=0;
        for(int i=0;i<ok.size()-1;i++)
        {
            int oo=*min_element(ok.begin()+i,ok.end());
            auto xx=find(ok.begin(),ok.end(),oo);
            reverse(ok.begin(),xx+1);
            cost+=distance(ok.begin(),xx)-i+1;;
    
        }
         cout<<cost<<endl;



    }
return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// int N;
// cin>>N;
// while(N--)
// {
//    int n;
//    cin>>n;
// vector<int>v(n);
// for(int i=0;i<n;i++)
// {
//    cin>>v[i];
// }
// vector<int>even,odd;
// for(int i=0;i<n;i++)
// {
//    if(v[i]%2==0)
//    {
//       even.push_back(v[i]);
//    }
//    else
//    {
//       odd.push_back(v[i]);
//    }
// }
// sort(even.begin(),even.end());
// sort(odd.begin(),odd.end());
// bool oke=true, oko=true;
// for(int i=0;i<n;i++)
// {
//    if(v[i]%2==0)
   
//       continue;
//    if(odd.empty() || odd[0]>=v[i])
//    {
//       oke=false;
//       break;
//    }
// }

// for(int i=0;i<n;i++)
// {
// if(v[i]%2!=0)
   
//       continue;
//    if(odd.empty() || odd[0]>=v[i])
//    {
//       oko=false;
   
//    break;
//    }
// }
// if(oke||oko)
// {
//    cout<<"YES"<<endl;

// }
// else
// {
//    cout<<"NO"<<endl;
// }


// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
map<int,string>m;
m[1]="OKKOK";
m[3]="koko";
m[2]="aa";
m.insert({4,"auu"});
map<int,string> :: iterator it;
for(it=m.begin();it!=m.end();++it)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}
return 0;
}


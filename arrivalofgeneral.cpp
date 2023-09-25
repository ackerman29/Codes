#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	int maxi=0;
	int mini=0;
	int maxx=0;
	int minn=10000;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>maxx)
		{
			
			maxx=a;
			maxi=i;
		}
		else if(a<=minn)
		{
			
			minn=a;
			mini=i;
		}
	}
	 if(maxi>mini){
	    cout<<(maxi-1)+(n-mini)-1;
    }
    else{
	    cout<<(maxi-1)+(n-mini);
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int max_value=0;
//     int min_value=1000;
//     int maxi=0,mini=0;
//     cin>>n;
//     for(int i=0;i<n;i++){
// 	    int a;
//     if(a>max_value){
// 	    maxi=i;
// 	    max_value=a;
//     }
//     if(a<=min_value){
// 	    mini=i;
// 	    min_value=a;
//     }
//     }
 
//     if(maxi>mini){
// 	    cout<<(maxi-1)+(n-mini)-1;
//     }
//     else{
// 	    cout<<(maxi-1)+(n-mini);
//     }
//     return 0;
// }
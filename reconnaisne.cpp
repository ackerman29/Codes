#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int x, y;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
  }
  int flag=0;
  	int minn=0;
    minn = abs(a[0] - a[n-1]);
    for(int i = 0; i < n-1; i++)
    {       
            if( abs(a[i] - a[i+1]) < minn)
            {
                minn = abs(a[i] - a[i+1]);
                x = i + 1;
                y = i + 2;
                flag=1;
            }


        
    }
    if(flag==0){
    	cout<<1<<" "<<n<<endl;
    }else{cout << x << " " << y << endl;
    }
    return 0;
}


//MAXIMUM SUM OF SUBARRAY WITH K WINDOW

#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int k,int n)
{
	// int sum=0;
	// int maxi=INT_MIN;
	// for(int i=0;i<k;i++)
	// {
	// 	sum+=a[i];
	// }
	// for(int i=k;i<n;i++)
	// {
	// 	sum-=a[i-k];
	// 	sum+=a[i];
	// 	maxi=max(sum,maxi);
	// }
	// cout<<maxi;
	int i = 0, j = 0;
    int maxi = INT_MIN;
    int sum = 0;
    while (j < n) {
        sum += a[j];
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            maxi = max(maxi, sum);
            sum -= a[i]; // Update the sum by removing the leftmost element of the window
            i++; // Move the window's starting point
            j++; // Move the window's ending point
        }
    }
    cout << maxi;
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	solve(a,k,n);



return 0;
}
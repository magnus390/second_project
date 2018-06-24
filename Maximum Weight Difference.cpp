#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n] = {0},sum1 = 0,sum2 = 0,ans;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1 = sum1 + a[i];
		}
		sort(a,a+n);
		if(2*k>=n)
		{
			for(int i=n-1;i>=n-k;i--)
			{
				sum2 = sum2 + a[i];
			}
			sum1 = sum1 - sum2;
			ans = sum2 - sum1;
			cout<<ans<<endl;
		}
		else
		{
			for(int i=0;i<k;i++)
			{
				sum2 = sum2 + a[i]; 
			}
			sum1 = sum1 - sum2;
			ans = sum1 - sum2;
			cout<<ans<<endl;
		}
	}
return(0);
}

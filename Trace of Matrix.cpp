#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[10005];
	cin>>t;
	while(t--)
	{
		cin>>n;
		int temp,cntr,ans = INT_MIN;
		for(int i=0;i<n*n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			temp = 0;
			cntr = i;
			for(int j=i;j<n;j++)
			{
				temp = temp + a[cntr];
				cntr = cntr + n + 1;
			}
			ans = max(ans,temp);
		}
		for(int i=n;i<n*n-n+2;i=i+n)
		{
			temp = 0;
			cntr = i;
			for(int j=i;j<=n*n-n;j=j+n)
			{
				temp = temp + a[cntr];
				cntr = cntr + n + 1;
			}
			ans = max(ans,temp);
		}
		cout<<ans<<endl;
	}
return(0);
}

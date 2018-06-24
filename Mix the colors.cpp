#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n+5],ans = 1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i-1]==a[i])
			{
				ans++;
			}
		}
		cout<<ans-1<<endl;
	}
return(0);
}

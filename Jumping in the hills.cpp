#include<iostream>
using namespace std;
int main()
{
	int t,n,u,d,a[205],i;
	cin>>t;
	while(t--)
	{
		int ans1 = 1,ans2;
		bool flag = true;
		cin>>n>>u>>d;
		cin>>a[0];
		for(i=1;i<n;i++)
		{
			ans2 = ans1;
			cin>>a[i];
			if(a[i-1]>a[i])
			{
				if(a[i-1]-a[i]<=d)
				{
					ans1++;
				}
				else if(flag)
				{
					flag = false;
					ans1++;
				}
			}
			else if(a[i-1]<a[i])
			{
				if(a[i]-a[i-1]<=u)
				{
					ans1++;
				}
			}
			else if(a[i-1]==a[i])
			{
				ans1++;	
			}
			if(ans1==ans2)
			{
				break;	
			}
		}
		for(int j=i+1;j<n;j++)
		{
			cin>>ans2;
		}
		cout<<ans1<<endl;	
	}
return(0);
}

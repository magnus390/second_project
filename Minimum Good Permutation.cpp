#include<iostream>
using namespace std;
int main()
{
	int t,n,ans;
	cin>>t;
	while(t--)
	{
		ans = 2;
		cin>>n;
		if(n%2==0)
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0)
				{
					cout<<ans<<" ";
				}
				else
				{
					cout<<ans-1<<" ";
					ans = ans + 2;
				}
			}
			cout<<endl;
		}
		else
		{
			if(n>3)
			{
				for(int i=0;i<n-3;i++)
				{
					if(i%2==0)
					{
						cout<<ans<<" ";
					}
					else
					{
						cout<<ans-1<<" ";
						ans = ans + 2;
					}	
				}
				cout<<n-1<<" "<<n<<" "<<n-2<<" ";
			}
			else
			{
				cout<<n-1<<" "<<n<<" "<<n-2<<" ";
			}
			cout<<endl;
		}
	}
return(0);
}

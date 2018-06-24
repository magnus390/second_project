#include<iostream>
using namespace std;
int main()
{
	int t,n,a;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			ans = ans^(2*a);
		}
		cout<<ans<<endl;
	}
return(0);
}

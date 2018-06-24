#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n;
	bool flag;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(m==1)
			m++;
		for(int i=m;i<=n;i++)
		{
			flag = true;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(!(i%j))
				{
					flag = false;
					break;
				}
			}
			if(flag)
			{
				cout<<i<<endl;
			}
		}
	}
return(0);
}

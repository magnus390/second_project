#include<bits/stdc++.h>
using namespace std;
bool prime[100000000];
void precalculate()
{
	prime[0] = prime[1] = false;
	for(int i=2;i<100000000;i++)
		if(prime[i])
			for(int j=2*i;j<100000000;j=j+i)
				prime[j] = false;
}
int main()
{
	bool flag;
	memset(prime,true,sizeof(prime));
	precalculate();
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(n<100000000)
			for(int i=m;i<=n;i++)
				if(prime[i])
					cout<<i<<endl;
	/*	else
			for(int i=m;i<=n;i++)
			{
				if(i<100000000)
				{
					if(prime[i])
						cout<<i<<endl;
				}
				else
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
						cout<<i<<endl;
				}
			}*/
	}
return(0);
}

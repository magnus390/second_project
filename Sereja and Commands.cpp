#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tes,n,m,t,l,r;
	cin>>tes;
	while(tes--)
	{
		int a[100][100] = {0},z[100] = {0};
		cin>>n>>m;
		for(int i=1;i<=m;i++)
		{
			cin>>t>>l>>r;
			if(t==1)
			{
				for(int j=l;j<=r;j++)
				{
					++a[i][j];
					++z[j];
				}
			}
			else
			{
				for(int j=l;j<=r;j++)
				{
					for(int k=1;k<=n;k++)
					{
						a[i][k] = a[i][k] + a[j][k];
					}
				}
				for(int j=1;j<=n;j++)
				{
					z[j] = z[j] + a[i][j];
				}
			}
		}
		for(int i=1;i<=n;i++)
			cout<<z[i]<<" ";
		cout<<endl;
	}
return(0);
}

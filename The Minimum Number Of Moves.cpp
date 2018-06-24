#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,min,sum,var;
	cin>>t;
	while(t--)
	{
		sum = 0;
		min = INT_MAX;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>var;
			sum = sum + var;
			if(min>var)
			{
				min = var;		
			}		
		}
		cout<<sum - n*min<<endl;
	}
return(0);
}

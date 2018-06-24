#include<bits/stdc++.h>
using namespace std;
long long a[1000000] = {0};
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		long long count = 0,x = 0,temp,temp1,temp2,ans = 0,i;
		cin>>n;
		for(i=0;i<n*n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			sort(a+x,a+x+n);
			x = x+n;
		}
		temp = n - 1; 
		ans = temp1 = a[n*n-1];
		x = i = 1;
		while(temp--)
		{
			count = n;
			flag = false;
			while(count--)
			{
				temp2 = a[n*n-n*x-i];
				if(temp1>temp2)
				{
					ans = ans + temp2;
					temp1 = temp2;
					x++;
					i = 1;
					flag = true;
					break;
				}
				i++;
			}
			if(!flag)
			{
				cout<<-1<<endl;
				break;
			}
		}
		if(flag)
		{
			cout<<ans<<endl;
		}
	}
return(0);
}

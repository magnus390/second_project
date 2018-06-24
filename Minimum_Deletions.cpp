#include<bits/stdc++.h>
using namespace std;
bool a[50001];
void precal()
{
	for(int i=2;i<=50000;i++)
	{
		if(a[i])
		{
			for(int j=2*i;j<=50000;j=j+i)
			{
				a[j] = false;	
			}	
		}
	}
}
int main()
{
	memset(a,true,sizeof(a));
	precal();
	int t,n;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		int count = 0,x;
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(a[arr[i]])
			{
				count++;
				if(count==2)
				{
					flag = true;
					cout<<0<<endl;
					break;
				}
			}
		}
		if(!flag)
		{
			count = 0;
			sort(arr,arr+n);
			x = arr[0];
			for(int i=1;i<n;i++)
			{
				if(arr[i]%x==0)
				{
					count++;
				}
			}
			if(count==n-1)
			{
				if(x==1)
				{
					cout<<0<<endl;
				}
				else
				{
					cout<<-1<<endl;
				}
			}
			else
			{
				cout<<-1<<endl;
			}
		}
	}
return(0);
}


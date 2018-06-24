#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long testcase,n,k;
	cin>>testcase;
	while(testcase--)
	{
		bool flag = false,flag2 = false;
		long long a[100005] = {0},sum = 0,sum1 = 0,ans = INT_MIN,max = INT_MIN,counter = 0,counter2 = 0,index = 0,temp = INT_MIN,temp2;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
			if(temp<a[i])
			{
				temp = a[i];
			}
			sum1 = sum1 + a[i];
		}
		if(k<3)
		{
			for(int i=0;i<k;i++)
			{
				for(int j=0;j<n;j++)
				{
					sum = sum + a[j];
					if(sum<0)
					{
						sum = 0;
					}
					else
					{
						flag2 = true;
						if(sum>ans)
						{
							ans = sum;
						}
					}
				}
			}
			if(flag2)
				cout<<ans<<endl;
			else
				cout<<temp<<endl;
		}
		else
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<n;j++)
				{
					counter2++;
					counter++;
					sum = sum + a[j];
					if(sum<0)
					{
						counter = sum = 0;
					}
					else
					{
						flag2 = true;
						if(sum>ans)
						{
							ans = sum;
						}
					}
					if(counter==n+1)
					{
						index = counter2 - counter;
						flag = true;
						break;
					}
				}
				if(flag)
				{
					break;	
				}
			}
			if(flag2)
			{
				if(flag)
				{
					ans = sum1*(k - 2);
					sum = 0;
					temp2 = INT_MIN;
					for(int i=index;i<n;i++)
					{
						ans = ans + a[i];
					}	
					for(int i=0;i<n;i++)
					{
						sum = sum + a[i];
						if(temp2<sum)
						{
							max = sum;
							temp2 = sum;
						}
					}
					cout<<(ans+max)<<endl;
				}
				else
				{
					cout<<ans<<endl;		
				}
			}
			else
			{
				cout<<temp<<endl;
			}		
		}
	}
return(0);
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		bool flag = false,flag1 = false;
		long long a[100001] = {0},sum = 0,index1 = 0,index2 = 0,count = 0,temp1,temp2,ans,ans1,max = INT_MIN;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(max<a[i])
				max = a[i];
		}
		if(k<4)
		{
			ans = a[0];
			for(int i=0;i<k;i++)
			{
				for(int j=0;j<n;j++)
				{
					sum = sum + a[j];
					if(sum<=0)
					{
						sum = 0;
					}
					else if(sum>0)
					{
						flag1 = true;
						if(sum>ans)
						{
							ans = sum;
						}
					}			
				}
			}
			if(flag1)
				cout<<ans<<endl;
			else
				cout<<max<<endl;
		}
		else
		{
			ans = a[0];
			index1 = 0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<n;j++)
				{
					sum = sum + a[j];
					count++;
					if(sum<0)
					{
						index1 = i+1;
						sum = count = 0;
					}
					else if(sum>0)
					{
						if(sum>ans)
						{
							ans = sum;
						}
					}		
					if(count==2*n)
					{
						index2 = i;
						flag = true;
						break;	
					}	
				}
				if(flag)
				{
					break;
				}
			}
			if(index2!=0)
			{
				temp1 = index2 - index1 + 1;
				temp2 = (n - index1)/temp1;
				ans = ans*temp2;
				index2 = index2 + temp1*(temp2 - 1) + 1;
				ans1 = a[index2];
				for(int i=index2;i<n;i++)
				{
					sum = sum + a[i];
					if(sum<=0)
					{
						sum = 0;
					}
					else if(sum>0)
					{
						if(sum>ans1)
						{
							ans1 = sum;
						}
					}	
				}
				cout<<ans+ans1<<endl;
			}
			else
			{
				cout<<ans<<endl;
			}
		}
	}
return(0);
}

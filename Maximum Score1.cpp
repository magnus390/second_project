#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long a[1000][1000];
int main()
{
	long long test_case,n;
	cin>>test_case;
	while(test_case--)
	{
		bool flag = true;
		long long ans = 0,temp1,i,j;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
			sort(a[i],a[i]+n);
		}
		ans = temp1 = a[n-1][n-1];
		for(i=n-2;i>=0;i--)
		{
			flag = false;
			for(j=n-1;j>=0;j--)
			{
				if(temp1>a[i][j])
				{
					ans = ans + a[i][j];
					temp1 = a[i][j];
					flag = true;
					break;
				}
			}
			if(!flag)
			{
				break;
			}
		}
		if(flag)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	} 
return(0);
}

#include<iostream>
using namespace std;
int main()
{
	int t,n,num,ans,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			if(i==0)
			{
				temp = num;
				ans = i;
			}
			else
			{
				if(temp>num)
				{
					temp = num;
					ans = i;	
				}
			}	
		}
		cout<<ans+1<<endl;
	}	
return(0);
}

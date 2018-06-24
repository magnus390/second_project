#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		long long count1 = 0,count2 = 0,ans;
		cin>>n;
		while(n--)
		{
			long long num;
			cin>>num;
			if(num!=0 && num!=1)
			{
				if(num==2)
				{
					count1++;
				}
				else
				{
					count2++;
				}
			}
		}
		ans = (count1*count2 + ((count2)*(count2-1))/2);
		cout<<ans<<endl;
	}
return(0);
}

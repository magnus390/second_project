#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	float n,a,l,s;
	cin>>test;
	while(test--)
	{
		int flag = 1;
		cin>>n;
		a = 1;
		l = n;
		s = (n+1)/2;
		while(1)
		{
			if(s>=n-1 && s<=n+1)
			{
				for(int i=0;i<n;i++)
				{
					cout<<a+i<<" ";
				}
				flag = 0;
				cout<<endl;
				break;
			}
			else if(s>=n+1)
			{
				flag = 1;
				break;
			}
			else
			{
				a++;
				l++;
				s = (a+l)/2;
			}
		}
		if(flag)
			cout<<-1<<endl;
	}	
return(0);
}

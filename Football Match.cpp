#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int count1 = 0,count2 = 0;
		string s1,s2,s;
		cin>>n;
		getchar();
		for(int i=0;i<n;i++)
		{
			cin>>s;
			getchar();
			if(i==0)
			{
				s1 = s;
				count1++;
			}
			else
			{
				if(s!=s1)
				{
					s2 = s;
					count2++;
				}
				else
				{
					count1++;
				}
			}
		}
		if((count1-count2)>0)
		{
			cout<<s1<<endl;
		}
		else if((count1-count2)<0)
		{
			cout<<s2<<endl;
		}
		else
		{
			cout<<"Draw"<<endl;
		}
	}
return(0);
}

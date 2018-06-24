#include<iostream>
using namespace std;
int main()
{
	int r,l;
	string s;
	cin>>r;
	getchar();
	while(r--)
	{
		int z = 0,flag = 0;
		cin>>l;
		getchar();
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='H')
			{
				flag++;
				if(flag!=1)
				{
					flag = 1;
					break;
				}
			}
			else if(s[i]=='T')
			{
				flag--;
				if(flag)
				{
					flag = 1;
					break;
				}
			}
		}
		if(flag)
			cout<<"Invalid"<<endl;
		else
			cout<<"Valid"<<endl;
	}
return(0);
}

#include<iostream>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	getchar();
	while(t--)
	{
		int temp = 0;
		cin>>s;
		if(s.length()==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else if(s.length()>=2)
			if(s[0]==s[1])
			{
				temp = 1;
				cout<<"YES"<<endl;
				continue;
			}
		for(int i=0;i<s.length()-2;i++)
		{
			if(s[i]==s[i+1] || s[i]==s[i+2] || s[i+1]==s[i+2])
			{
				cout<<"YES"<<endl;
				temp = 1;
				break;	
			}
		}
		if(!temp)
			cout<<"NO"<<endl;
	}
return(0);
}

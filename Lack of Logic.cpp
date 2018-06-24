#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		int count = 0,a[26] = {0};
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++)
		{
			if((s[i]>='a' && s[i]<='z') && (a[s[i] - 'a'])==0)
			{
				count++;
				++a[s[i] - 'a'];
			}
			if((s[i]>='A' && s[i]<='Z') && (a[s[i] - 'A'])==0)
			{
				count++;
				++a[s[i] - 'A'];
			}
			if(count==26)
			{
				break;
			}
		}
		if(count==26)
		{
			cout<<'~'<<endl;
		}
		else
		{
			for(int i=0;i<26;i++)
			{
				if(a[i]==0)
				{
					cout<<char(65 + i)<<endl;
					break;
				}
			}
		}
	}
return(0);
}

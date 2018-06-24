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
		int a[26] = {0},flag = 1;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			++a[s[i] - 'a'];
			if(a[s[i] - 'a']>1)
			{
				printf("yes\n");
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("no\n");
	}
return(0);
}

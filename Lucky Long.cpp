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
		int ans = 0;
		cin>>s;
		getchar();
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!='4' && s[i]!='7')
				ans++;
		}
		cout<<ans<<endl;
	}
return(0);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,len;
	string str1;
	char temp;
	cin>>t;
	getchar();
	while(t--)
	{
		int ans = 0;
		cin>>str1;
		getchar();
		len = str1.length();
		if(len==1)
		{
			cout<<1<<endl;
			continue;
		}
		for(int i=0;i<len;i++)
		{
			bool flag = true;
			for(int j=0;j<len/2;j++)
			{
				if(str1[j]!=str1[len - j - 1])
				{
					flag = false;
					break;
				}
			}
			if(flag)
			{
				ans++;
			}
			temp = str1[0];
			str1 = str1.substr(1,len-1);
			str1 = str1 + temp ;
		}
		cout<<ans<<endl;
	}
return(0);
}

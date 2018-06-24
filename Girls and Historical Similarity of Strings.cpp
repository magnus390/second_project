#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char s1[1005] = {'\0'},s2[1005] = {'\0'};
		int a[26] = {0},b[26] = {0},flag = 1,count = 0;
		cin>>s1>>s2;
		if(strlen(s1)!=strlen(s2))
			cout<<"NO"<<endl;
		else
		{
			for(int i=0;i<strlen(s1);i++)
			{
				++a[s1[i] - 'a'];
				++b[s2[i] - 'a'];
			}
			for(int i=0;i<strlen(s1);i++)
			{
				if(a[i]==0)
					break;
				else
					count++;
			}		
			if(count==26)
			{
				count = strcmp(s1,s2);
				cout<<"count = "<<count;
				if(!count)
					cout<<"YES"<<endl;
				else
					cout<<"NO"<<endl;
			}
			else
			{
				sort(a,a+26);
				sort(b,b+26);
				for(int i=25;i>=0;i--)
				{
					if(a[i]!=b[i])
					{
						cout<<"NO"<<endl;
						flag = 0;
						break;
					}
					else if(a[i]==0 && b[i]==0)
						break;
				}
				if(flag)
					cout<<"YES"<<endl;
			}	
		}
	}
return(0);
}

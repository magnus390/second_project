#include<iostream>
using namespace std;
int main()
{
	int t,k=0;
	string s;
	cin>>t;
	getchar();
	while(k!=t)
	{
		char z;
		int a[27] = {0},sum = 0,flag = 1,count = 0;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				count++;
				++a[s[i] - 'A'];
			}
			else if(s[i]>='a' && s[i]<='z')
			{
				count++;
				++a[s[i] - 'a'];
			}
		}
		for(int i=0;i<26;i++)
		{
			if(a[i]==0)
			{
				flag = 0;
				sum = sum + i;
			}
		}
		sum = sum + count;
		if(!flag)
		{
			sum = sum%26;
			z = sum;
			printf("String %d Representative is = %c\n",k+1,z);
		}
		else
		{
			cout<<"Nothing is missing"<<endl;
		}
	k++;
	}
return(0);
}

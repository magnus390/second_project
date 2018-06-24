#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		int max1 = INT_MIN,max2 = INT_MIN;
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i=i+2)
		{
			if(max1<(s[i] - '0'))
				max1 = (s[i] - '0');
			else if(max2<(s[i] - '0'))
				max2 = (s[i] - '0');
		}
		if(max1==(s.length() + 1)/2-1)
			cout<<max2<<endl;
		else
			cout<<max1<<endl;
	}
return(0);
}

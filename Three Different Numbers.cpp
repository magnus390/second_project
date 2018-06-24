#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[2] = {0},temp = 1000000007;
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		sort(a,a+3);
		cout<<((((a[0]%temp)*((a[1]-1)%temp))%temp)*((a[2]-2)%temp))%temp<<endl;
	}
return(0);
}

#include<iostream>
using namespace std;
int main()
{
	long long t,x1,x2,x3,v1,v2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>x2>>x3>>v1>>v2;
		if(((x3-x1)*v2)==((x2-x3)*v1))
		{
			cout<<"Draw"<<endl;
		}
		else if(((x3-x1)*v2)<((x2-x3)*v1))
		{
			cout<<"Chef"<<endl;
		}
		else
		{
			cout<<"Kefa"<<endl;
		}
	}
return(0);
}

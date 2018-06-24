#include<iostream>
using namespace std;
int main()
{
	long long n,element,ans = 1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>element;
		ans = ((ans%1000000007)*element)%1000000007;
	}	
	cout<<ans;
return(0);
}

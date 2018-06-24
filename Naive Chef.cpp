#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,a,b,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		double ans = 0;
		int arr[10002] = {0};
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(arr[temp]==0)
			{
				ans++;
			}
			arr[temp]++;
		}
		
	}
return(0);
}

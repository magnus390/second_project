#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	char c;
	int n,q,ind1,ind2,num;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	getchar();
	while(q--)
	{
		long long sum = 0;
		cin>>c;
		if(c=='S')
		{
			cin>>ind1>>ind2;
			for(int i=ind1;i<=ind2;i++)
			{
				sum += v[i];
			}
			cout<<sum<<endl;
		}
		else if(c=='G')
		{
			cin>>ind1>>ind2;
			v[ind1] += ind2;
		}
		else
		{
			cin>>ind1>>ind2;
			v[ind1] -= ind2;
		}
	}
return(0);
}

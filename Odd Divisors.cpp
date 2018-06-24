#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,l,r,a[100009] = {0},sum,i,j,temp;
	a[1] = 1;
	a[2] = 1;
	a[3] = 4;
	for(i=4;i<=100000;i++)
	{
		temp = sqrt(i);
		sum = 0;
		for(j=2;j<temp;j++)
		{
			if((i%j)==0)
			{
				if(((i%j)%2)!=0)
				{
					sum += i%j;
					if(((i/(i%j))%2)!=0)
					{
						sum += (i/(i%j));
					}
				}
				else
				{
					if(((i/(i%j))%2)!=0)
					{
						sum += (i/(i%j));
					}
				}
			}
		}
		if((i%temp)==0)
		{
			if(temp%2!=0)
			{
				sum += temp;
			}
			else
			{
				sum += (i/temp);
			}
			if(i%2!=0)
			{
				sum = sum + i + 2;
			}
			else
			{
				++sum;
			}
		}
		else
		{
			if(i%2!=0)
			{
				sum+=i+1;
			}
			else
			{
				++sum;
			}
		}
		a[i] = sum;
	}
	cin>>t;
	while(t--)
	{
		sum = 0;
		cin>>l>>r;
		for(i=l;i<=r;i++)
			sum += a[i];
		cout<<sum<<endl;
	}
return(0);
}

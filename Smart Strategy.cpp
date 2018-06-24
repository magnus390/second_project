#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,q,d,x,i,j,ans,temp = 1;
	scanf("%lld",&t);
	while(t--)
	{
		temp = 1;
		scanf("%lld%lld",&n,&q);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&d);
			temp = temp*d;
			if(temp>1000000000)
				break;
		}
		for(i=0;i<q;i++)
		{
			scanf("%lld",&x);
			ans = x/temp;
			printf("%lld ",ans);
		}
		printf("\n");
	} 
return(0);
}

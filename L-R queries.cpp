#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
	{  
		long long int n,q,maximum=-1;
    	scanf("%lld%lld",&n,&q);
     	long long int a[n];
    	for(long long int i=0;i<n;i++)
    	{
        	scanf("%lld",&a[i]);
    	}
    	for(long long int i=0;i<q;i++)
    	{
        	maximum = -1;
         	long long int f,l,r;
        	scanf("%lld%lld%lld",&f,&l,&r);
       		switch(f)
        	{
    			case 1:
    			{
    				for(long long int j=l-1;j<=r-1;j++)
        			{
             			long long int temp=((a[j]-a[l-1])*(a[r-1]-a[j]));
            			if(maximum<temp)
                			maximum=temp;
        			}
        			printf("%lld\n",maximum);
        			break;
				}
    			case 2:
        		{
        		    a[l-1]=r;
        			break;
        		}
        	}
 
    	}
	}
return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int a[2000001];
bool oe[2000001];
long long int temp[2000001];
long long int ans[1000001];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
            oe[i]=false;
        else
            oe[i]=true;
        a[i]=i;
    }
    for(int i=10;i<2000001;i++)
    {
        int k=i%10;
        int r=i/10;
        if(k%2==0)
        {
            if(oe[r]==true)
            {
                if(a[r]-a[k]<0)
                {
                    oe[i]=false;
                    a[i]=abs(a[r]-a[k]);
                }
                else
                {
                    oe[i]=true;
                    a[i]=a[r]-a[k];
                }
            }
            else
			{
                a[i]=a[r]+a[k];
                oe[i]=false;
            }
        }
        else
		{
            if(oe[r]==false)
            {
                if(a[r]-a[k]<0)
                {
                    oe[i]=true;
                    a[i]=abs(a[r]-a[k]);
                }
                else
                {
                    oe[i]=false;
                    a[i]=a[r]-a[k];
                }
            }
            else
			{
                a[i]=a[r]+a[k];
                oe[i]=true;
            }
        }
    }
    temp[1]=0;
    temp[2]=0;
    for(int i=3;i<2000001;i++)
        temp[i]=temp[i-1]+2*a[i];
    ans[1]=2;
    for(int i=2;i<1000001;i++)
        ans[i]=ans[i-1]+temp[2*i]-temp[i]-a[2*i];
    while(t--)
	{
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
return(0);
}

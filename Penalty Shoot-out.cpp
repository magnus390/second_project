#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int team_a = 0,team_b = 0,counter = 0,ans = 0,i;
		for(i=0;i<10;i=i+2)
		{
			if(s[i]=='1')
			{
				team_a++;
			}	
		}
		for(i=1;i<10;i=i+2)
		{
			if(s[i]=='1')
			{
				team_b++;
			}	
		} 	
		if(team_a>team_b)
		{
			for(i=0;i<10;i++)
			{
				if(i%2==0)
				{
					if(s[i]=='1')
					{
						counter++;
					}
					if(counter>(10-i)/2)
					{
						printf("TEAM-A");
						printf(" %d\n",i+1);
						break;
					}
				}	
				else
				{
					if(s[i]=='1')
					{
						counter--;
					}
					if(counter>(10-i-1)/2)
					{
						printf("TEAM-A");
						printf(" %d\n",i+1);
						break;
					}
				}
			}	
		}
		else if(team_b>team_a)
		{
			for(i=0;i<10;i++)
			{
				if(i%2==0)
				{
					if(s[i]=='1')
					{
						counter--;
					}
					if(counter>(10-i-1)/2)
					{
						printf("TEAM-B");
						printf(" %d\n",i+1);
						break;
					}
				}	
				else
				{
					if(s[i]=='1')
					{
						counter++;
					}
					if(counter>(10-i-1)/2)
					{
						printf("TEAM-B");
						printf(" %d\n",i+1);
						break;
					}
				}
			}
		}
		else if(team_a==team_b)
		{
			bool flag = false;
			for(i=10;i<20;i=i+2)
			{
				if(s[i]!=s[i+1])
				{
					if(s[i]=='1')
					{
						flag = true;
						printf("TEAM-A");
						printf(" %d\n",i+2);
						break;					
					}
					else
					{
						flag = true;
						printf("TEAM-B");
						printf(" %d\n",i+2);
						break;
					}
				}
			}
			if(!flag)
			{
				printf("TIE\n");	
			}
		}
	}
return(0);
}

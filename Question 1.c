#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=-1,k,temp=0,num1,num2,a[1000] = {0};
	char s[1002] = {'\0'};
	scanf("%[^\n]s",s);
	scanf("%d",&num1);
	num2 = num1;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			j++;
			a[j] = i+1;
		}
	}
	j++;
	a[j] = i+1;
	k = j;
	i = 0;
	while(1)
	{
		if(num1>=a[i] && a[i]!=0)
		{
			i++;
		}
		else
		{
			if(((a[i] - a[i-1] - 1)==num1))
			{
				for(j=temp;j<a[i-1];j++)
				{
					printf("%c",s[j]);
				}
			}
			else
			{
				for(j=temp;j<temp+7;j++)
				{
					printf("%c",s[j]);
				}	
			}
			num1 = num1 + num2;
			temp = a[i-1];
			printf("\n");
			if(temp==a[k])
			{
				break;
			}
		}
	}
return(0);
}

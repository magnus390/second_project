#include<iostream>
using namespace std;
char c;
FILE *f1,*f2;
int func(char *ptr)
{	
	c = getc(f1);
	ptr = &c;
	if((*ptr)=='*')
	{
		while((*ptr)!='*')
		{
			abc:
			c = getc(f1);
			ptr = &c;
		}
		c = getc(f1);
		ptr = &c;
		if(*ptr!='/')
		{
			goto abc;
		}
	}
	else if((*ptr)=='/')
	{
		while((*ptr)!='\n')
		{
			c = getc(f1);
			ptr = &c;
		}
	}
	return(0);
}
int main()
{
	int a;
	f1 = fopen("abc.txt","r");
	f2 = fopen("abcd.txt","w");
	if(f1==NULL || f2==NULL)
	{
		cout<<"Error opening file";
	}
	else
	{
		c = getc(f1);
		while(c!=EOF)
		{
			if(c=='/')
			{
				a = func(&c);
				c = getc(f1);
			}
			else if((c!=' ') && (c!='	'))
			{
				fputc(c,f2);
			}
			c = getc(f1);
		}	
	}
	fclose(f2);
	f2 = fopen("abcd.txt","r");
	c = getc(f2);
	while(c!=EOF)
	{
		printf("%c",c);
		c = getc(f2);
	}
	fclose(f1);
	fclose(f2);
return(0);
}

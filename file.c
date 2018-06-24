#include<stdio.h>
int main()
{
	int i;
	FILE *in;
	in = fopen("C:/Users/Admin/Desktop/hello.txt","w");
	char a[100] = "hello world";
	i = 0;
	while(i!=11)
	{
		putc(a[i],in);
		i++;
	}
	fclose(in);
	return(0);
}

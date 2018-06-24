#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string str;
	int choice,key,temp,flag;
	do
	{
		cout<<"\n1 for encryption\n";	
		cout<<"\n2 for decryption\n";
		cout<<"\nEnter choice = ";
		cin>>choice;
		cout<<"\nEnter string = ";
		cin>>str;
		cout<<"Enter key = ";
		cin>>key;
		getchar();
		if(choice==1)
		{	
			for(int i=0;i<str.length();i++)
			{
				if(str[i]>='a' && str[i]<='z')
				{
					temp = (str[i]-'a') + key + 1;
					if(temp>26)
					{
						temp = temp - 26;
						printf("%c",'a'+temp-1);
					}	
					else if(temp==26)
					{
						printf("%c",'z');
					}
					else
					{
						printf("%c",'a'+temp);
					}
				}
				else
				{
					temp = (str[i]-'A') + key;
					if(temp>26)
					{
						temp = temp - 26;
					}	
					printf("%c",'A'+temp);	
				}	
			}	
		}
		else if(choice==2)
		{
			for(int i=0;i<str.length();i++)
			{
				if(str[i]>='a' && str[i]<='z')
				{
					temp = (str[i]-'a') - key;
					if(temp<0)
					{
						temp = abs(temp);
					}	
					printf("%c",'z'-temp);
				}
				else
				{
					temp = (str[i]-'A') - key;
					if(temp<26)
					{
						temp = abs(temp);
					}	
					printf("%c",'A'+temp);	
				}	
			}
		}
		cout<<"\nContinue or not = ";
		cin>>flag;
	}while(flag);
return(0);
}

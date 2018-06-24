#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,temp1,temp2,counter;
	string str1,str2,str3;
	cin>>t;
	getchar();
	while(t--)
	{
		cin>>str1;
		getchar();
		str2 = str1;
		if(str1.length()%2==0)
		{
			counter = str1.length()/2 - 1;
			for(int i=str1.length()/2-1;i>=0;i--)
			{
				counter++;
				str2[counter] = str1[i]; 
			}
			temp1 = stoi(str1);
			temp2 = stoi(str2);
			if(temp1<temp2)
			{
				cout<<temp2<<endl;
			}
			else
			{
				temp1 = temp1 + pow(10,str1.length()/2);			
				str2 = to_string(temp1);
				str3 = str2;
				if(str2.length()%2==0)
				{
					counter = str2.length()/2-1;
					for(int i=str2.length()/2-1;i>=0;i--)
					{
						counter++;
						str3[counter] = str2[i]; 
					}		
					cout<<str3<<endl;
				}
				else
				{
					counter = str2.length()/2;
					for(int i=str2.length()/2-1;i>=0;i--)
					{
						counter++;
						str3[counter] = str2[i]; 
					}		
					cout<<str3<<endl;
				}
			}
		}
		else
		{
			counter = str1.length()/2;
			for(int i=str1.length()/2-1;i>=0;i--)
			{
				counter++;
				str2[counter] = str1[i]; 
			}
			temp1 = stoi(str1);
			temp2 = stoi(str2);
			if(temp1<temp2)
			{
				cout<<temp2<<endl;
			}
			else
			{
				temp1 = temp1 + pow(10,str1.length()/2);			
				str2 = to_string(temp1);
				str3 = str2;
				if(str2.length()%2==0)
				{
					counter = str2.length()/2-1;
					for(int i=str2.length()/2-1;i>=0;i--)
					{
						counter++;
						str3[counter] = str2[i]; 
					}		
					cout<<str3<<endl;
				}
				else
				{
					counter = str2.length()/2;
					for(int i=str2.length()/2-1;i>=0;i--)
					{
						counter++;
						str3[counter] = str2[i]; 
					}		
					cout<<str3<<endl;
				}
			}
		}
	}
return(0);
}

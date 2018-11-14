#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[20];
	cin>>a;
	int b,i,top=0,flag=0;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='(')
		{
			//push++;
			top++;
			flag=0;
		}
		else if(a[i]==')')
		{
			if(top==0)
			{
				cout<<"wrong";
				flag=1;
				break;
				
			}
			else
			{
				//pop--;
				top--;
				flag=0;
			}
		}
	}
	if(flag==0)
	{
	
		if(top==0)
		{
			cout<<"right";
		}
		else
		{
			cout<<"wrong";
		}
	}
}

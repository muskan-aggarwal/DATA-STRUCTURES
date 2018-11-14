#include<iostream>
#include<string.h>
using namespace std;
int s[30];
int top=-1;
void push(char x)
{
	top++;
	s[top]=x;
}
int pop()
{
	char a=s[top];
	top--;
	return a;
}
int main()
{
	string st;
	int op1,op2,r;
	cout<<"enter postfix expression : ";
	getline(cin,st);
	for(int i=0;i<st.length();i++)
	{
		if(st[i]>=0||st[i]<=9)
		{
			push(st[i]);
		}
		else
		{
		op1=pop();
		op2=pop();
		switch(st[i])
		{
			case '+': r=op1+op2;
			push(r);
			break;
			case'-': r=op1-op2;
			push(r);
			break;
			case '*':r=op1*op2;
			push(r);
			break;
			case '/':r=op1/op2;
			push(r);
			break;
			case '^':for(int j=1;j<=op2;j++)
			{
				int p=1;
				p=p*op1;
				r=p;
			}
			push(r);
			break;
		}
			
		}
	}
	r=pop();
	cout<<"ans ="<<r;
	
	
}

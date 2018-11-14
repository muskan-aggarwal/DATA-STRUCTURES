#include<iostream>
#include<string.h>
using namespace std;
class stack
{
	public:
		int top=-1;
		char s[20];
		void push(char x)
		{
			if(top==19)
			cout<<"overflow"<<endl;
			else
			{
			top++;
			s[top]=x;
		    }
			
		}
		void pop()
		{
			top--;
		}
		void display()
		{
			if(top==-1)
			{
				cout<<"underflow"<<endl;	
			}
			else
			{
				for(int i=top;i>=0;i--)
				{
					cout<<s[i];
				}
			}
		}
};
int main()
{
	stack s1;
	string a;
	getline(cin,a);
	//cin>>a;
	for(int i=0;i<a.length();i++)
	{
		s1.push(a[i]);
    }
    s1.display();
	
	
}

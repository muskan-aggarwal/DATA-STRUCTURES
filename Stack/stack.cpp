#include<iostream>
using namespace std;
int push_stack(int *arr,int top,int n,int item)
{
	if(top>=n)
	{
		cout<<"overflow condition "<<endl;
	}
	else
	{
		cout<<"enter the element to insert "<<endl;
		cin>>item;
		arr[top]=item;
		top++;
	}
	return top;
}
int pop_stack(int *arr,int top,int n)
{
	if(top==0)
	{
		cout<<"underflow condition "<<endl;
	}
	else
	{
		top=top-1;
	}
	return top;
}
int main()
{
	int arr[50],n,i,j,top=0,choice,item;
	cout<<"enter the size of the stack "<<endl;
	cin>>n;
	cout<<"enter 1 for push, 2 for pop, 3 for displaying top and 4 for exit "<<endl;
	cin>>choice;
	
	while(choice!=4)
	{
		if(choice==1)
		top=push_stack(arr,top,n,item);
		else if(choice==2)
		top=pop_stack(arr,top,n);
		else if(choice==3)
		{
			cout<<top<<endl;
		}
		else
		break;
		
		cout<<"enter 1 for push, 2 for pop, 3 for displaying top and 4 for exit "<<endl;
		cin>>choice;
	}
	return 0;
	
}

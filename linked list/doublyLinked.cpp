#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
int main()
{
	struct node *head,*tail,*f,*ptr;
	int i,n;
	head=NULL;
	tail=NULL;
	cout<<"enter no of elements "<<endl;
	cin>>n;
	i=0;
	while(i<n)
	{
		f=new node;
		cin>>f->data;
		if(head==NULL && tail==NULL)
		{
			f->next=NULL;
			f->prev=NULL;
			head=f;
			tail=f;
		}
		else
		{
			f->next=NULL;
			f->prev=tail;
			tail->next=f;
			tail=tail->next;
		}
		i++;
	}
	cout<<"Linked list "<<endl;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl<<"Reverse Linked List "<<endl;
	ptr=tail;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->prev;
	}
	return 0;
}

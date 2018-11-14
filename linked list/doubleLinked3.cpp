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
	int i,n,elem,num;
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
			f->next=head;
			f->prev=NULL;
			head->prev=f;
			head=head->prev;
		}
		i++;
	}
	cout<<"enter the element after which you want to insert "<<endl;
	cin>>elem;
	cout<<"enter the number to insert"<<endl;
	cin>>num;
	ptr=head;
	while(ptr->data!=elem)
	{
		ptr=ptr->next;
	}
	f=new node;
	f->data=num;
	f->prev=ptr;
	f->next=ptr->next;
	ptr->next->prev=f;
	ptr->next=f;
	
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" "<<endl;
		ptr=ptr->next;
	}
	return 0;
}

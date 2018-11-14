#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *f,*head,*ptr;
	int n,i=0;
	cout<<"enter no of elements for insertn at beg "<<endl;
	cin>>n;
	head=NULL;
	while(i<n)
	{
		if(head==NULL)
		{
			f=new node;
			cin>>f->data;
			f->next=NULL;
			head=f;
			ptr=head;
		}
		else
		{
			f=new node;
			cin>>f->data;
			ptr->next=f;
			f->next=head;
			head=f;
		}
		i++;
	}
	ptr=head;
	do
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}while(ptr!=head);
	return 0;
}

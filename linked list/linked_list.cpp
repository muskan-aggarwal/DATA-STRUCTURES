#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
node *head,*tail;
void insert()
{
	int data1;
	node *temp= new node;
	cin>>data1;
	temp->data=data1;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
	}
}
void display()
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		cout<<temp->next<<endl;
		temp=temp->next;
	}
}
void delete1(int x)
{
	node *s,*temp;
	temp=head;
	s=NULL;
	for(int i=1;i<x;i++)
	{
		s=temp;
		temp=temp->next;
	}
	s->next=temp->next;
	delete temp;
}
int main()
{
	int n;
	head=tail=NULL;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		insert();
	}
	display();
	cout<<"enter position u want to delete"<<endl;
	int pos;
	cin>>pos;
	delete1(pos);
	display();
	
}

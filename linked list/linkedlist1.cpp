#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i=1;
	struct node *start,*f1,*ptr;
	f1= new node;
	cin>>f1->data;
	f1->next=NULL;
	start=f1;
	ptr=start;
	while(i<5)
	{
		f1=new node;
		cin>>f1->data;
		f1->next=NULL;
		ptr->next=f1;
		ptr=ptr->next;
		i++;
	}
	ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->data;
		ptr=ptr->next;
	}
	return 0;
}


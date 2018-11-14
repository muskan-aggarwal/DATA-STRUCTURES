#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i=0;
	struct node *start,*f1,*ptr;
	start=NULL;
	cout<<"enter elements"<<endl;
	while(i<5)
	{
		f1=new node;
		cin>>f1->data;
		f1->next=start;
		start=f1;
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

#include<iostream>
using namespace std;
class queue
{
	public:
	int q[20];
	int front=-1,rear=-1;
	int n;
	void insert(int n)
	{
		
		if(rear==19)
		{
			cout<<"overflow"<<endl;
		}
		else if(front==-1)
		{
			front=0;
			rear=0;
			q[rear]=n;
		}
		else
		{
			rear++;
			q[rear]=n;
		}
	}
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<endl;
		}
	}
	void deletion()
	{
		if(front==-1)
		{
			cout<<"underflow"<<endl;
		}
		else if(front==rear)
		{
			front=-1;
			rear=-1;
			cout<<"queue is empty";
		}
		else
		{
			front++;
		}
	}
	
	
};
int main()
{
	queue q1;
	int n,m;
	cout<<"the no. of elements u want to enter";
	cin>>m;
	for(int j=0;j<m;j++)
	{
	
	cout<<"enter element";
	cin>>n;
	q1.insert(n);
}
	q1.display();
	cout<<"after deletion"<<endl;
	q1.deletion();
	q1.display();
}

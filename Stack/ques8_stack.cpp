#include<iostream>
using namespace std;
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
void push(int value)
{

    //write your code
    top++;
    stack[top]=value;

}

void pop()
{
//write your code
top--;
}

void display()
{
//write your code
	for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<endl;
	}
}

int main()
{
    int i, j, n, data;
    cin>>n; 
    for (i=1; i<=n; i++)
    {
       cin>>j;
cout<<" " ;

       if(j==1)
       {
         cin>>data;
           push(data);
       }
       if(j==0)
       {
           pop();
       }
    }
    display();
}


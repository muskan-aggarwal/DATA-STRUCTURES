#include<bits/stdc++.h>
using namespace std;

 #define MAX 6
int Stack[MAX];
int top = -1;

void push(int x);
void pop();
void display();

int main ()
{
    int choice, val;
    choice = -1;
    
    
    while(choice !=4)
    {
    	cout<<"enter choice";
        cin >> choice;
        switch(choice)
        {
            case 1: 
			//cout<<”Enter the element to push”;
                cin>>val;
                push(val);
                break;
            case 2:  
			//cout<<”Enter the element to pop”;
                pop();
                break;
            case 3:
			 //cout<<”Display the stack elements”;
                display();
                break;
            default:
                break;
        }
    }
    return 0;
}
//Add your code here
void push(int x)
		{
			if(top==(MAX-1))
			cout<<"overflow"<<endl;
			else
			{
			top++;
			Stack[top]=x;
		    }
			
		}
void pop()
		{
			top--;
		}
void display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<Stack[i]<<endl;
	}
}

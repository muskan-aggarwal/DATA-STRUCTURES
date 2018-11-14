#include <iostream>
using namespace std;
#define size 20

class stackk
{
int a[10];
int top;
public:
stackk()
{
top=-1;
}
void push(int);
int stack_max();
};

 
void stackk::push(int val)
{

//write your code here
top++;
    a[top]=val;


}

int stackk::stack_max()
{

//write your code here
int l=a[0];
	for(int i=0;i<=top;i++)
	{
		if(a[i]>a[i+1])
		{
			l=a[i];
			
		}
	}
return l;
}

int main() {
    stackk s;
    int n,i,b;
    cin>>n; 
    int m;
    for(i=0;i<n;i++)
        { 
        cin>>b; 
        s.push(b);}
    m=s.stack_max();
    cout<<m;
  return 0;
}



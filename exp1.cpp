#include<iostream>
using namespace std;
void insert(int,int);
void del(int);
void location(int);
void traverse();
int arr[50],size;
int main()
{
	
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
int ch;
int num,pos;
double element;
while(ch!=5)
 {
 	cout<<"Enter our choice"<<endl;
 cout<<"1. Insert";
 cout<<"\n2. Delete";
cout<<"\n3. Location";
 cout<<"\n4. Display elements";
 cout<<"\n5. Quit\n";
 cin>>ch;
switch(ch)
{
case 1:
cout<<"enter element:";
cin>>num;
cout<<"enter pos.:";
cin>>pos;
insert(num,pos);
break;
case 2:
cout<<"enter pos.:";
cin>>pos;
del(pos);
break;
case 3:
cout<<"enter element";
location(element);
break;
case 4:
traverse();
break;
case 5:
break;
default:
cout << "Invalid input" << endl;
}
}

 }
void insert(int num, int pos)
 {
 for(int i=size; i>=pos;i--)
 arr[i]=arr[i-1];
 arr[pos]=num;
 size++;
 }
void del(int pos)
 {
 for(int i=pos; i<=size;i++)
 arr[i-1]=arr[i];
 size--;
 }
void traverse()
{ int i;
cout<<"array is:"<<endl;
for(i=0;i<size;i++)
cout<<arr[i]<<endl;

}
void location(int element)
{
cin>>element;
int Index;
for (int i=0;i<5; i++)
{
 if (element == arr[i])
 {
 Index = i;
 }
cout<<Index;
}
}

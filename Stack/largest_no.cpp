#include<iostream>
using namespace std;
int main()
{
	int n,a[10],k;
	cout<<"enter size";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			l=a[i];
			k=i;
		}
	}
	cout<<"largest no."<<l<<endl;
	cout<<"index = "<<k;
}

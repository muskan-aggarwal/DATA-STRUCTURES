#include<iostream>
using namespace std;
int main()
{
	int n,a[10],i,k,t;
	cout<<"enter size";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
			if(a[k]>a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=a[k];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,j;
	cout<<"enter no of elements";
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	for(j=1;j<n;j++)
	{
		int key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
	cout<<endl;
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<endl;
	}
}

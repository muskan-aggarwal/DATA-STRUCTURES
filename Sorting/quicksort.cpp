#include<iostream>
using namespace std;
int arr[30];
int split(int *a,int lower,int upper)
{
	int p,q,i,t;
	p=lower+1;
	q=upper;
	i=a[lower];
	while(q>=p)
	{
		while(a[p]<i)
		p++;
		while(a[q]>i)
		q--;
		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
	}
	t=a[lower];
	a[lower]=a[q];
	a[q]=t;
	return q;
}
void quicksort(int lower,int upper)
{
	if(upper>lower)
	{
		int i=split(arr,lower,upper);
		quicksort(lower,i-1);
		quicksort(i+1,upper);
		
	}
}
int main()
{
	int n;
	cout<<"enter no of elements";
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int k=0;k<n;k++)
	{
		cin>>arr[k];
	}
	quicksort(0,n);
	for(int k=1;k<=n;k++)
	{
		cout<<arr[k]<<endl;
	}
}

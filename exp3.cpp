#include<iostream>
using namespace std;
int main()
{
	int n, i, arr[50], j, temp, search, first, last, middle;
	cout<<"Enter size of array :";
	cin>>n;
	cout<<"Enter elements :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using bubble sort technique\n";
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter a number to find :";
	cin>>search;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;

		}
		else if(arr[middle] == search)
		{
			cout<<search<<" found at location "<<middle<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"the number is not found in the array";
	}
  return 0;
}



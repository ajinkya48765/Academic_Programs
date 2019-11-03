#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int n;
	int temp;
	cout<<"Enter number of elements of array  :  ";
	cin>>n;

	cout<<"Enter elements of an array  :  ";
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	//BUBBLE SORT
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n-i ; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
}

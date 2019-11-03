#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[10],b[10],c[10];
	int n,j=0;
	int value, count=0;

	cout<<"Enter the number of elements of an array : ";
	cin>>n;

	cout<<"Enter "<<n<<" space separated integer values : \n";
	for (int i = 0; i < n; i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	count=1;

	for (int i = 0; i < n; i++)
	{
		value=a[i];
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			b[j]=value;
			c[j]=count;
			j++;
			count=1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<setw(25)<<"elements are  ";
	for (int i = 0; i < j; i++)
	{
		cout<<setw(4)<<b[i]<<" ";
	}
	cout<<endl<<setw(25)<<"frequency is  ";
	for (int i = 0; i < j; i++)
	{
		cout<<setw(4)<<c[i]<<" ";
	}
	int largef=c[0],position;
	for (int i = 0; i < j; i++)
	{
		if(c[i]<c[i+1])
		{
			largef=b[i+1];
			position=i+1;
		}
	}

	cout<<endl<<b[position]<<" is the most frequent element in this set of numbers. It is repeated "<<largef<<" times";
}

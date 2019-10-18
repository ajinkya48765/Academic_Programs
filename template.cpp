#include<iostream>
using namespace std;

template<class T>

T sort()
{
	T a[10];
	T temp;
	int i,j;
	cout<<"\n\nEnter elements";
	for(i=0;i<10;i++)
		cin>>a[i];

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	cout << "\nsorted array is : ";
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	return 0;
}
int main()
{
	cout<<"\n\nint\n";
	sort <int>();
	cout<<"\n\nfloat\n";
	sort <float>();
}

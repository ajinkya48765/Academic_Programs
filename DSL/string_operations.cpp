#include<iostream>
using namespace std;

class sub
{
public:
	char a[100];
	char b[100];

	int getdata(char c[100])
	{
		cin>>c;
		return 0;
	}

	int putdata(char c[100])
	{
		cout<<endl;
		cout<<c;
		return 0;
	}

	int copy(char a[100],char b[100])
	{
		for (int i = 0; i<100; i++)
		{
			b[i]=a[i];
			//cout<<  i ;
		}
		return 0;

	}

	int length(char c[100])
	{
		int count=0;
		for(int i=0;c[i]!='\0';i++)
		{
			count++;
		}
		cout<<"\n string length is "<<count;
		return count;
	}

	int concat(char a[100],char b[100])
	{
		int j=0;
		for (int i = 0; i <100; i++)
		{
			if(a[i]=='\0')
			{
				a[i]=b[j];
				j++;
			}
		}
		return 0;
	}
};

int main()
{
	sub s;
	char a[100],b[100];
	/*Call functions here*/


}

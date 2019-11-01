/*Set A=(1,3, a, s, t, i} represent alphanumeric characters permitted to be 
used to set the password of length 4. Write C/C++ program to generate all
possible passwords.*/



#include<iostream>
using namespace std;

class password
{
public:
	char a[6]={'a','e','o','i','1','@'};
	int count = 0;

	int logic()
	{
		int i,j,k,l;

		for(i=0;i<=5;i++)
		{
			for(j=0;j<=5;j++)
			{
				for(k=0;k<=5;k++)
				{
					for(l=0;l<=5;l++)
					{
						cout<<a[i]<<a[j]<<a[k]<<a[l]<<endl;
						count++;
					}
				}
			}
		}
		return 0;
	}

	int countf()
	{
		cout<<"Total number of combinations is : "<<count<<endl;
		return 0;
	}

};

int main()
{
	password p;

	p.logic();
	p.countf();
}

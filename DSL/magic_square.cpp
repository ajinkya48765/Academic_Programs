/*A magic square is an n * n matrix of the integers 1 to n2 such 
that the sum of each row, column, and diagonal is the same. The
figure given below is an example of magic square for case n=5. 
In this example, the common sum is 65. Write C/C++ Program for
magic square.*/
==========================================================================


#include<iostream>
#include<iomanip>
using namespace std;

class magic
{
public:
	int n;
	int i,j;
	int a[100][100];
	int row=0,col=0,tr,tc;

	int input()
	{
		cout<<"\nEnter value of n : ";
		cin>>n;
		return 0;
	}

	int allzero()
	{
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=0;
			}
		}
		return 0;
	}

	int logic()
	{
		col=n/2;
		a[row][col]=1;
		for(i=2;i<=n*n;i++)
		{
			tr=row;
			tc=col;
			row=row-1;
			col=col+1;
			if(row==-1)
				row=n-1;
			if(col==n)
				col=0;
			if(a[row][col]==0)
				a[row][col]=i;
			else
			{
				row=tr;
				col=tc;
				row=row+1;
				if(row==n)
					row=0;
				a[row][col]=i;
			}
		}
		return 0;
	}

	int display()
	{
		for(i=0;i<n;i++)
		{
			cout<<"     ";
			for(j=0;j<n;j++)
			{
				cout<<setw<<a[i][j];
			}
			cout<<endl;
		}
		return 0;
	}

};

int main()
{
	magic m;
	m.input();
	m.logic();
	m.display();
}

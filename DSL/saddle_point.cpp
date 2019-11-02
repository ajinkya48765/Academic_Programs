/* An m x n matrix is said to have a saddle point if some entry a[i][j] 
is the smallest value in row i and the largest value in j. 
Write C/ C++ function that determines the location of a saddle point
if one exists. */
=====================================================================


#include<iostream>
#include<iomanip>
using namespace std; 
class sad
{
public:
	int n;
	int a[100][100];
	int i,j,k;
	int small, large, column,row;
	int getdata()
	{
		cout<<"Enter value of n : ";
		cin>>n;
		cout<<"Enter elements of matrix";
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		return 0;
	}
	int saddle()
	{	
		for (i=0;i<n;i++)
		{
			small=a[i][0];
			for(j=0;j<n;j++)
			{
				if(a[i][j]<=small)
				{
					small=a[i][j];
					//large=a[i][j];
					column=j;
				}
			}
			large=a[0][column];
			for(k=0;k<n;k++)
			{
				if(a[k][column]>=large)
				{
					large=a[k][column];
					row=k;
				}
			}

			if(large==small)
			{
				cout<<large<<" is a saddle point and its position is a["<<row<<"]["<<column<<"]"<<endl;
			}
		}
		return 0;
	}
};
int main()
{
	sad s;
	s.getdata();
	//s.putdata();
	s.saddle();
}

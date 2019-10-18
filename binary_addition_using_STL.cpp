#include <algorithm> 
#include <stack> 
#include <queue>
#include <iostream> 
#include <iterator> 
#include <string>
using namespace std;
int displaystack( stack <int>);
int add(stack <int>b1, stack <int>b2);
int main()
{
	char a[40],b[40];
	int i;
	stack <int>b1;
	stack <int>b2;
	stack <int>b3;

	cout << "Enter two binary numbers"<<endl<<endl;
	cin>>a>>b;

	for(i=0;a[i]!='\0';i++)
	{
		b1.push(a[i]-'0');
	}
	for(i=0;b[i]!='\0';i++)
	{
		b2.push(b[i]-'0');
	}
	
	stack <int>s;
	int q=0, w=0,carry=0,sum;
	while(!b1.empty()||!b2.empty())
	{
		q=0, w=0;
		if(!b1.empty())
		{
			q=b1.top();
			b1.pop();
		}
		if(!b2.empty())
		{
			w=b2.top();
			b2.pop();
		}

		sum=(q+w+carry)%2;
		carry=(q+w+carry)/2;
		s.push(sum);
		if(b1.empty()&&b2.empty()&&carry==1)
			s.push(1);
		
	}
	displaystack(s);
	
}



int displaystack(stack <int>s)
{
	while(!s.empty())
	{
		cout<<""<<s.top();
		s.pop();
	}
	return 0;
}

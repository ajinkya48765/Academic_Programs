//I have written this complex number code only to practice operator overloading. 
// Please understand the code before using it as it is.






#include<iostream>
using namespace std;

class complex
{
public:
	int a, b;


int getdata(int i)
{
	cout<<"Enter real and imaginary parts of complex number : "<<i<<endl;
	cin>>a>>b;
	return 0;
}

int putdata(int i)
{
	cout<<"\ncomplex number : "<<i<<" is "<<a<<"+"<<b<<"i"<<endl;
	return 0;
}

complex operator + (complex ob)
{
	complex temp;
	temp.a=a+ob.a;
	temp.b=b+ob.b;
	return temp;

}

complex operator * (complex ob)
{
	complex temp;
	temp.a= a*ob.a-b*ob.b;
	temp.b= a*ob.b+ob.a*b;
	return temp;
}

};


int main()
{
	complex k1,k2,k3,k4;
	k1.getdata(1);
	k2.getdata(2);
	k1.putdata(1);
	k2.putdata(2);

	k3=k1+k2;
	k4=k1*k2;
	k3.putdata(3);
	k4.putdata(4);

}

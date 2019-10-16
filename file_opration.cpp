#include<iostream>
#include<fstream>
using namespace std;

class file
{

};

int main()
{
	char name[100];
	cout<<"Enter name of the file"<<endl;
	cin>>name;

	ofstream fout;
	ifstream fin;

	fout.open(name);
	string data;
	cout<<"enter content"<<endl;
	while(1)
	{
		getline(cin, data);
		if(data=="-1")
			break;
		fout<<data<<endl;
	}
	fout.close();

	fin.open(name);
	cout<<"file content is "<<endl;

	while (fin)
	{
		getline(fin, data);
		cout<<data<<endl;
	}

	fin.close();

}

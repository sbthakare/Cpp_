#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int a=0;
	char ch[20];
	ofstream out; //ofstream is a class out it is an object
	out.open("DAC.txt");
	cout<<"\nEnter Characters";
	cin>>ch; //friends
	while(a<=10)
	{
		out.put(ch[a]);
		out.put('\n');
		a++;
	}
	out.close();
		cout<<"\nFile Created";
	// how to open an exsting file
	ifstream in;  //exsting file open 
	in.open("DAC.txt"); //DAC file open
	a=1;
	while(a<=10)
	{
		in.get(ch[a]);
		cout<<ch;
		a++;
	}
	in.close();
	
}
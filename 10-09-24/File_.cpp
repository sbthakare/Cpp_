#include<iostream>
using namespace std;
main()
{
	char ch,str[30];
	/*cout<<"Enter character";
	cin.get(ch);
	while(ch!='\0')
	{
		
		cout.put(ch);
		cin.get(ch);
		
	}
	*/
	//getline
	cout<<"\nEnter String";
	cin>>str;
	cout<<"Name="<<str;
	cin.getline(str,40);
	cout<<"Name="<<str;
	cout<<"Enter string=";
	cin.getline(str,40);
	cout<<"Name="<<str;
}

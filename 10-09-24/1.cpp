// multilevel Inheritance

#include<iostream>
using namespace std;

class A
{
	public:
		void A_print()
		{
		cout<<"\n Class A: ";
		}
		
};

class B:public A
{
	public :
		void B_print()
		{    A::A_print();
			cout<<"\n Class B:";
		}
};

class C:public B
{
	public:
		void C_print()
		{    B::B_print();
			cout<<"\n Class C:";
		}
};

main()
{
	C c1;
	
	c1.C_print();
	
  /*c1.A_print();
	c1.B_print();
	c1.C_print();
  */
}
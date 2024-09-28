// multilevel Inheritance

#include<iostream>
using namespace std;

class A
{  protected:
	  int a;
	  
	public:
		void A_print()
		{
		cout<<"\n Enter A:";
		cin>>a;
		cout<<"\n Class A:"<<"\n A= "<<a;
		}
		
};

class B:public A
{	protected:
	   int b;
	public :
		void B_print()
		{    A::A_print();
			cout<<"\n Enter B:";
			cin>>b;
			b=b+a;
			cout<<"\n Class B:"<<"\n B = "<<b;
		}
};

class C:public B
{	private:
	  int ans;
	public:
		void C_print()
		{    B::B_print();
			cout<<"\n Enter Ans:";
			cin>>ans;
			ans=ans+b;
			cout<<"\n Class C:"<<"\n C="<<ans;
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
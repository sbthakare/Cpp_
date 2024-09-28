// Constructor in Inheritance 

#include<iostream>
using namespace std;

class A
{
 private:
   int a;
   float b;
   
   public:
   
   A()
   {
   	a=100;
   	b=50.6;
   }	
   
   void show()
	{
		cout<<"\n A="<<a<<"\n B="<<b;
	}
};

class B:public A
{
 private:
  int x,y;
  
  public:
    
   B()
   {
   	x=10;
   	y=20;
	 
	}
	void show()
	{  
	   A(); //optional
	  
	   A::show(); 
	cout<<"\nX="<<x<<"\nY="<<y;
	}	
};

main()
{
	B b1;
	b1.show();
}
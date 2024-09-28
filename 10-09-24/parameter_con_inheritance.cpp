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
   
   A(int a1,float b1)
   {
   	a=a1;
   	b=b1;
   }
   
   void show()
	{
		cout<<"\nA="<<a<<"\nB="<<b;
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
	B(int x1,int y1,int p,float q):A(p,q)
	{
	 x=x1;
	 y=y1;	
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
	B b1(10,20,40,56.4);
	b1.show();
	
	cout<<"\n ************************";
	
	B b2(20,40,50,9.8);
	b2.show();
}
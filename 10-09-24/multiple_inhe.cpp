// multilevel Inheritance

#include<iostream>
using namespace std;

class Employee
{  protected:
	int eno,salary;
    char name[10];	  
	public:
		void get()
		{
			cout<<"\n Enter eno,name & salary:";
			cin>>eno>>name>>salary;	
			
			cout<<"\n Eno:"<<eno<<"\n name:"<<name<<"\n salary:"<<salary;
		}
		
		
		
};

class Bonus:public Employee
{	protected:
	  int bonus;
	public :
		void B_show()
		{    Employee::get();
			bonus=salary*10/100;
			
			cout<<"\n Bonus:"<<bonus;
		}
		
};

class Net_Payment:public Bonus
{
	private:
		int netsalary;
		
	public:
		void show()
		{ Bonus::B_show();
			netsalary=salary+bonus;
			cout<<"\n Net_salary:"<<netsalary;
		}
};

main()
{
  Net_Payment e1,e2;
  e1.show();
  cout<<"\n __________________";
  e2.show();
}
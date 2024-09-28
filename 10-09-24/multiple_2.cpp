// multilevel Inheritance

#include<iostream>
using namespace std;

class FE
{  
	protected:
	 int roll;
	 int total;
	 char name[10];
	
	public:
    void FE_get()
	{ 
		cout<<"\n Enter RollNo, Name & total:";
	    cin>>roll>>name>>total;
	  	
		
	}
	
	void show()
	{
	cout<<"\t Roll No:"<<roll<<"\t name:"<<name<<"\n Total="<<total;
		
	}	
	
};

class SE:public FE
{
	protected:
		int stotal;
	public:
		void SE_get()
		{
			
		}
};

class TE:public SE
{
		protected:
		int ttotal;
	public:
	void TE_get()
	{
	}
	
	
};

main()
{
}
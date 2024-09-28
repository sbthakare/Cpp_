//Hybrid inheritance

#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class A {
	public:
		void A_print() {
			cout<<"\n Class A:";
		}
};
class B:public A {
	public:
		void B_print() {
			A::A_print();
			cout<<"\n Class B:";
		}
};
class C {
	public:
		void C_print() {
			
			cout<<"\n Class C";
		}
};

class D:public B,public C {
	public:
		void D_print() {
			B::B_print();
			C::C_print();
			cout<<"\n Class D";
		}
};

main() {
	D d1;

d1.D_print();
}
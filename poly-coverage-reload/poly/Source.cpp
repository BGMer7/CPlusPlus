#include <iostream>
using namespace std;
class A
{
public:
	virtual void ShowMessage();
};

class B :public A
{
public:
	void ShowMessage();
};

void A::ShowMessage()
{
	cout << "This is A./n";
	return;
}

void B::ShowMessage()
{
	cout << "This is B./n";
	return;
}

int main()
{
	A* p;
	p = new A();
	p->ShowMessage();
	p = new B();
	p->ShowMessage();
	return 0;
}
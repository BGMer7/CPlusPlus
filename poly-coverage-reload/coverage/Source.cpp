#include <iostream>
using namespace std;
class A
{
public:
	void ShowMessage();
};
class B :public A
{
public:
	void ShowMessage();
};

void A::ShowMessage()
{
	cout << "Hello,This is A./n";
	return;
}

void B::ShowMessage()
{
	cout << "Hello,This is B./n";
	return;
}

int main()
{
	A* p;
	B memb;
	*p = memb;
	p->ShowMessage();
	memb.ShowMessage();
	return 0;
}
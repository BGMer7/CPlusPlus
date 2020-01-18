#include <iostream>
using namespace std;
class A
{
public:
	void ShowMessage();
	void ShowMessage(string str);
};
void A::ShowMessage()
{
	cout << "Hi,This is A./n";
	return;
}

void A::ShowMessage(string str)
{
	cout << str << endl;
	return;
}

int main()
{
	A mem;
	mem.ShowMessage();
	mem.ShowMessage("Hello.How are you?/n");
	return 0;
}
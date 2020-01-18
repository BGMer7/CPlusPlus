#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ivec{1, 2, 43, 42, 4, 32, 6};
	for (vector<int>::iterator i = ivec.begin(); i != ivec.end(); i++)
	{
		cout << *i << endl;
	}

	vector<string> svec{"hello", "world", "!!!"};
	for (vector<string>::iterator i = svec.begin(); i != svec.end(); i++)
	{
		cout << *i;
	}
	cout << endl;

	string s("helloworld!!!");
	cout << s << endl;
	for (string::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i;
	}

	int test = 3;
	if (test)
	{
		cout << test << endl;
	}
	sort(ivec.begin(), ivec.end());
}
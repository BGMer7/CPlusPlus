#include<iostream>
using namespace std;
int main() {
	int i, j;
	for (i = 0, j = 5; i = j; )
	{
		cout << i << j << endl; i++; j--;
	}
}
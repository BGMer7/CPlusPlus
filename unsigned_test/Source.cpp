#include<iostream>
#define delta sizeof(int)

using namespace std;
int main() {
	for (int i = 40; i - delta >= 0; i -= delta) {
		cout << i - delta << endl;
		i = i - delta;
		cout << i << endl;
	}
}
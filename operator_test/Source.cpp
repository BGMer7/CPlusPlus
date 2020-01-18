#include<iostream>
using namespace std;
int main() {
	int a = 3;
	int res = a += a -= a * a;
	cout << res;
	cout << a;
}
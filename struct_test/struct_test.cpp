#include <iostream>
using namespace std;
struct
{
	char a;
	short b;
	int c;
	long long d;
} struct_a;
//结构体的定义中，需要考虑到CPU的对齐，对于结构体中占用空间最大的类型为单位
//比如此处的long long就是最大的占用，所以是最小的单位，如果不是long long的倍数需要补齐
struct
{
	short b;
	char a;
	int c;
	long long d;
} struct_b;

struct
{
	char a[10];
	int b;
	short c[3];
} struct_c;

//----------------------------------------------------
union package {
	char head;
	int body;
}; //sizeof(package) = 4

struct message
{
	char id;
	int crc;
	union package pack;
}; //sizeof(message) = 12
//----------------------------------------------------

struct stu
{
	union {
		char bj[5];
		int bh[2];
	};
	char xm[8];
	float cj;
} xc;
//----------------------------------------------------
int main()
{
	cout << sizeof(struct_a);
	cout << endl;
	cout << sizeof(struct_b);
	cout << endl;
	cout << sizeof(struct_c);
	cout << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(message) << endl;
	cout << sizeof(package) << endl;
	cout << sizeof(xc) << endl;
}
// output:16 16 -- struct_a and struct_b

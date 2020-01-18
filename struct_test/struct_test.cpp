#include <iostream>
using namespace std;
struct
{
	char a;
	short b;
	int c;
	long long d;
} struct_a;
//�ṹ��Ķ����У���Ҫ���ǵ�CPU�Ķ��룬���ڽṹ����ռ�ÿռ���������Ϊ��λ
//����˴���long long��������ռ�ã���������С�ĵ�λ���������long long�ı�����Ҫ����
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

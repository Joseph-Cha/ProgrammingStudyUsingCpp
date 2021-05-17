// 안전하지 않은 타입 변환

#include <iostream>
using namespace std;

int main()
{
	//int a = 20000;
	//char c = a;
	//int b = c;
	//if (a != b)
	//	cout << a << "!=" << b;
	//else
	//{
	//	cout << "문자가 너무 크다.";
	//}
	//double d = 0;
	//while (cin >> d)
	//{
	//	int i = d;
	//	char c = i;
	//	int i2 = c;
	//	cout << "d == " << d
	//		<< " i == " << i
	//		<< " i2 == " << i2
	//		<< " char (" << c << ")\n";
	//}
	double x{ 2.7 };
	int y{ x };
	int a{ 1000 };
	char b{ a };
		
}
#include <iostream>
using namespace std;

int main()
{
	cout << "두 정수의 값을 입력하세요. " << endl;
	float val1 = 0;
	float val2 = 0;
	cin >> val1 >> val2;

	cout << "둘 중 더 큰 값은 ?" << endl;
	if (val1 > val2)
		cout << "val1" << endl;
	else
		cout << "val2" << endl;

	cout << "둘의 합은?" << endl;
	cout << val1 + val2 << endl;

	cout << "둘의 차는?" << endl;
	cout << val1 - val2 << endl;

	cout << "둘의 곱은?" << endl;
	cout << val1 * val2 << endl;

	cout << "둘의 비율은?" ;
	cout << val1 / val2 * 100 << "%" << endl;
}
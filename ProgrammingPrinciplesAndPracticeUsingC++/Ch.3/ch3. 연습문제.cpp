#include <iostream>
using namespace std;

int main()
{
	cout << "�� ������ ���� �Է��ϼ���. " << endl;
	float val1 = 0;
	float val2 = 0;
	cin >> val1 >> val2;

	cout << "�� �� �� ū ���� ?" << endl;
	if (val1 > val2)
		cout << "val1" << endl;
	else
		cout << "val2" << endl;

	cout << "���� ����?" << endl;
	cout << val1 + val2 << endl;

	cout << "���� ����?" << endl;
	cout << val1 - val2 << endl;

	cout << "���� ����?" << endl;
	cout << val1 * val2 << endl;

	cout << "���� ������?" ;
	cout << val1 / val2 * 100 << "%" << endl;
}
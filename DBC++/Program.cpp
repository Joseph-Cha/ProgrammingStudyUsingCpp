#include <iostream>

int main()
{
	//int x = 12; // initialization
	//int x(12); // initialization
	//x = 123; // assignment
	//// L value : ���� ��, �ּҸ� ������ ����
	//// R value : �� ��ü(���ͷ�)

	//std::cout << x << std::endl;
	//std::cout << &x << std::endl;
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl; // 3
	int y = x;
	std::cout << x + y << std::endl; // 6
	std::cout << x << std::endl; // 3

	int z;
	std::cout << &z << std::endl;

	return 0;
}
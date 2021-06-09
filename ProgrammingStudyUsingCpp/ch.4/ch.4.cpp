#include <iostream>
using namespace std;

void compare(double a, double b)
{
    double result = a - b;
    if (result < 1.0 / 100)
        cout << "두수가 거의 같음" << endl;
}

int main()
{
    double a = 0;
    double b = 0;
    while (cin >> a >> b)
    {
        if (a == b)
        {
            cout << "둘이 같은 값 " << endl;
        }
        else if (a < b)
        {
            cout << "더 작은값: " << a
                << " "
                << "더 큰값: " << b << endl;
            compare(b, a);
        }

        else
        {
            cout << "더 큰값: " << a
                << " "
                << "더 작은값: " << b << endl;
            compare(a, b);
        }
    }
}


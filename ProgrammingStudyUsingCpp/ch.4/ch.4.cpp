#include <iostream>
using namespace std;

int main()
{
    double min = 100000000000000;
    double max = -10000000000000;
    double c = 0;
    while (cin >> c)
    {
        if (min > c)
        {
            min = c;
        }
        if (max < c)
        {
            max = c;
        }
        cout << "min : " << min << endl;
        cout << "max : " << max << endl;
    }
}


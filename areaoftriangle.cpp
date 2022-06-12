#include <iostream>
using namespace std;

int area(int l, int b)
{
    int areaFinal = l * b;
    return areaFinal;
}
int main()
{

    int length, breadth, areaOfrectangle;

    cin >> length;
    cin >> breadth;
    areaOfrectangle = area(length, breadth);

    cout << areaOfrectangle;

    return 0;
}
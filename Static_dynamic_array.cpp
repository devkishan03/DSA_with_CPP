#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4}; // static

    int *b; // dynamic;
    b = new int[5];
    b[0] = 3;
    cout << b[0];

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2};
    int b[] = {4, 5, 6, 7, 8};
    int c[5];
    int d[4] = {1, 2, 3, 4};

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << d[i] << endl;
    }

    cout << 2 [a]; // can also find values
    cout << *(2 + a);
    cout << *(a + 2);
    return 0;
}

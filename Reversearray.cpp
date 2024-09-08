#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (int i : a)
    {
        cout << i << endl;
    }
    for (int i = 0, j = 10; i < 10 / 2; i++, j--)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for (int i : a)
    {
        cout << i << endl;
    }

    return 0;
}

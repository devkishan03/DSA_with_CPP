#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    a[0][0] = 5;

    int *A[3];

    A[0] = new int[4];

    A[0][1] = 10;

    return 0;
}

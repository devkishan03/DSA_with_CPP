#include <iostream>
using namespace std;

void setDiagonalMatrix(int arr[], int i, int j, int num)
{
    if (i == j)
    {
        arr[i - 1] = num;
    }
}
int getElement(int arr[], int i, int j)
{
    if (i == j)
    {
        return arr[i - 1];
    }
    else
        return 0;
}
void display(int arr[])
{
}

int main()
{
    int arr[5];
    for (int i = 1; i < 6; i++)
    {
        setDiagonalMatrix(arr, i, i, i + 2);
    }
    for (int i = 1; i < 6; i++)
    {
        cout << getElement(arr, i, i) << endl;
    }

    return 0;
}

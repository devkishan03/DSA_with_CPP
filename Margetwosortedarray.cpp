#include <iostream>
using namespace std;
int *merged(int arr1[], int m, int arr2[], int n)
{
    int i = 0, j = 0, k = 0;
    int *arr3 = new int[m + n];
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr3[k++] = arr2[j++];
    }

    return arr3;
}

int main()
{
    int a1[] = {1, 3, 5, 7, 9};
    int a2[] = {2, 3, 4, 6, 8};

    int *arr = merged(a1, 5, a2, 5);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int findDuplicateUnsorted_meth1(int arr[], int n)
{
    int count = 0;
    int element = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != element)
                {
                    if (arr[i] == arr[j])
                    {
                        arr[j] = -1;
                        element = arr[i];
                        count++;
                        cout << "duplicate element found:" << arr[i] << endl;
                    }
                }
                else
                {
                    arr[j] = -1;
                }
            }
        }
    }
    cout << "total duplicate:";
    return count;
}

int findDuplicateUnsorted_meth2(int arr[], int n, int highest)
{
    int count = 0;
    int element = 0;
    int *arr2 = new int[highest + 1];
    for (int i = 0; i <= highest; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != element)
        {

            if (arr2[arr[i]] != 1)
            {
                arr2[arr[i]]++;
            }
            else
            {
                element = arr[i];
                cout << "Duplicate element found:" << element << endl;
                count++;
            }
        }
    }
    cout << "total number of duplicates:";
    return count;
}

int main()
{
    int arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = 10;
    int highest = 8;
    cout << findDuplicateUnsorted_meth2(arr, n, highest);
    return 0;
}

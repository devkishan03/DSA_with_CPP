#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11, 12, 12};
    int n = 16;
    int element = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            if (arr[i] != element)
            {
                cout << "duplicate element found:" << arr[i] << endl;
                element = arr[i];
                count++;
            }
        }
    }
    cout << "total number of duplicates:" << count << endl;

    return 0;
}

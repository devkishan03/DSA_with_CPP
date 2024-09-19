#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 9, 10, 11, 12, 13};

    int low = 4;
    int high = 13;
    int n = 9;
    int diff = low - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing number will be:" << i + diff << endl;
            cout << "missing at index:" << i << endl;
            break;
        }
    }

    return 0;
}

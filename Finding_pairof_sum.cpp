#include <iostream>
using namespace std;
void findPairofSum(int arr[], int n, int sum)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair found:" << arr[i] << "," << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int n = 10;
    int sum = 10;
    findPairofSum(arr, n, sum);
    return 0;
}

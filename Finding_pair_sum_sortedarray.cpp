#include <iostream>
using namespace std;
void findPairofsumsortedarray(int arr[], int n, int sum)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] > sum)
        {
            j--;
        }
        else if (arr[i] + arr[j] < 10)
        {
            i++;
        }
        else
        {
            cout << "pair of sum found:" << arr[i] << "," << arr[j] << endl;
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int n = 10;
    int sum = 10;
    findPairofsumsortedarray(arr, n, sum);
    return 0;
}

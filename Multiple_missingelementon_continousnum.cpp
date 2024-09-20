#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 4, 5, 7, 9, 10, 11, 15, 18, 19, 20};
    int n = 11;
    int low = 3;
    int diff = low - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "Missing number will be:" << diff + i << endl;
                diff++;
            }
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 6, 8, 9, 10, 11, 12, 15, 16, 18, 20};
    int lowest = 2;
    int highest = 20;
    int n = 13;

    int *arr2 = new int[highest];
    for (int i = 0; i < highest; i++)
    {
        arr2[i] = 0; // as c++ use garbage value so need to initialize them with 0
    }
    for (int i = 0; i < n; i++)
    {
        arr2[arr[i]]++;
    }
    for (int i = lowest; i != highest; i++)
    {
        if (arr2[i] == 0)
            cout << "Missing numbers will be:" << i << endl;
    }
    return 0;
}

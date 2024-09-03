#include <iostream>
using namespace std;

int binarysearch(int a[], int size, int key)
{
    int start = 0;
    int end = size;
    while (end >= start)
    {
        int index = (start + end) / 2;
        if (a[index] == key)
        {
            return index;
        }
        else if (a[index] > key)
        {
            end = index - 1;
        }
        else if (a[index] < key)
        {
            start = index + 1;
        }
    }
    return -1;
}

int main()
{
    int size = 14;
    int a[] = {4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43};
    int key = 6;

    cout << binarysearch(a, size, key);
    return 0;
}

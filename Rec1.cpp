#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " before" << endl;
        fun(n - 1);
        cout << n << " after" << endl;
    }
}

int main()
{
    fun(3);

    return 0;
}
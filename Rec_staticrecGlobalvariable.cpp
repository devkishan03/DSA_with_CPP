#include <iostream>
using namespace std;
int y = 0;
int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        y++;
        // return fun(n - 1) + x;
        return fun(n - 1) + y;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout << fun(a);
    return 0;
}
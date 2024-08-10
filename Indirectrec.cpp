#include <iostream>
using namespace std;
void fun2(int n);

void fun1(int n)
{
    if (n > 100)
    {
        cout << "value of n:" << n << endl;
    }
    else
    {
        fun2(n + 100);
    }
}

void fun2(int n)
{
    if (n < 100)
    {
        cout << "value of n:" << n << endl;
    }
    else
    {
        fun1(n + 2);
    }
}
int main()
{

    fun1(90);

    return 0;
}
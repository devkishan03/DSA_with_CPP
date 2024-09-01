#include <iostream>
using namespace std;
class array
{
private:
    int n;
    int *A;

public:
    array()
    {
    }
    void setn(int num)
    {
        n = num;
        A = new int[n];
    }
    void addelements()
    {
        cout << "enter the elements" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
    void display()
    {
        cout << "the elements are:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << endl;
        }
    }
};

int main()
{
    cout << "enter the number of elements" << endl;
    int n;
    cin >> n;
    array arr;
    arr.setn(n);
    arr.addelements();
    arr.display();

    return 0;
}

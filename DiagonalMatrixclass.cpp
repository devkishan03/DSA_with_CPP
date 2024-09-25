#include <iostream>
using namespace std;
class DiagonalMatrix
{
private:
    int *arr;
    int n;

public:
    DiagonalMatrix(int n)
    {
        arr = new int[n];
        this->n = n;
    }
    void setValues(int val, int i, int j)
    {
        if (i == j)
        {
            arr[i - 1] = val;
        }
        else
            cout << "value position error" << endl;
    }
    int getValue(int i, int j)
    {
        if (i == j)
        {
            return arr[i - 1];
        }
        else
            return -1;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    cout << arr[i];
                }
                else
                    cout << "0";
            }
            cout << "\n";
        }
    }

    ~DiagonalMatrix();
};

int main()
{
    DiagonalMatrix dm(5);
    for (int i = 0; i < 5; i++)
    {
        dm.setValues(i + 2, i + 1, i + 1);
    }
    dm.display();

    return 0;
}

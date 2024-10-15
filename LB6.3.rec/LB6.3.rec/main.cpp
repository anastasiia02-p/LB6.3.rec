#include <iostream>
#include <iomanip>

using namespace std;

void output(int a[], int n, int i);
template <typename T>
T countA(T a[], int n, T& count, int i)
{
    if (i < n)
    {
        if (a[i] % 2 != 0)
        {
            count += a[i];
        }
        countA(a, n, count, i + 1);
    }
    return count;
}

int main()
{
    const int n = 4;
    int i = 0, count = 0;
    int a[n] = { 1,2,3,4 };
    cout << "a= ";
    output(a, n, i);
    cout << "Count= " << countA(a, n, count, i);
}

void output(int a[], int n, int i)
{
    if (i < n)
    {
        cout << a[i] << setw(4);
        output(a, n, i + 1);
    }
    cout << endl;
}

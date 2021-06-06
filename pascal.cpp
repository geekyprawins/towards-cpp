#include <iostream>
using namespace std;

int factorial(int n)
{
    int factNum = 1;
    for (int i = 2; i <= n; i++)
    {
        factNum *= i;
    }
    return factNum;
}
double nCr(int n, int r)
{

    double result = factorial(n) / (factorial(n - r) * factorial(r));
    return result;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

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

    int n, r;
    cout << "Enter n and r values to calculate nCr : ";
    cin >> n >> r;
    cout << nCr(n, r) << endl;

    return 0;
}

#include <iostream>
using namespace std;
// to get sum till n numbers
int sumFn(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = sumFn(n - 1);
    return n + prevSum;
}
// n raised to power p

int powerFn(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int prevPower = powerFn(n, p - 1);
    return n * prevPower;
}

//  factorial of a number n

int factorialFn(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorialFn(n - 1);
}

// nth fibonacci number

int fiboFn(int n)
{

    if (n == 1 || n == 0)
    {
        return n;
    }

    return fiboFn(n - 1) + fiboFn(n - 2);
}
int main()
{
    int n;
    cin >> n;
    // cout << sumFn(n) << endl;
    // int p;
    // cin >> p;
    // cout << powerFn(n, p) << endl;
    // cout << factorialFn(n) << endl;
    cout << fiboFn(n) << endl;

    return 0;
}

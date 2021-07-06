#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main()
{

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
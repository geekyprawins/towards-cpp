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
int main()
{
    int n;
    cin >> n;
    cout << sumFn(n) << endl;

    return 0;
}

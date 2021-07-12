#include <iostream>
using namespace std;

void printNumDec(int n)
{
    // in descending
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNumDec(n - 1);
}

void printNumInc(int n)
{
    // in ascending
    if (n == 0)
    {
        return;
    }
    printNumInc(n - 1);
    cout << n << endl;
}
int main()
{
    printNumDec(8);
    cout << endl;
    printNumInc(8);
    return 0;
}

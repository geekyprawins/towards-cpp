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

int main()
{
    int number;
    cout << "Enter the number to calculate factorial : ";
    cin >> number;
    int fact = factorial(number);
    cout << fact << endl;
    return 0;
}

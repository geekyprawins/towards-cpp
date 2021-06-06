#include <iostream>

using namespace std;
int main()
{

    // to reverse a given number
    int num;
    cout << "Enter any number : ";
    cin >> num;
    int lastDigit, revNum = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num /= 10;
    }
    cout << "Reversed number is " << revNum << endl;

    return 0;
}

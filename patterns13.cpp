#include <iostream>
using namespace std;

int main()
{
    // to print a star pattern

    int n;
    cout << "Enter any value for n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}
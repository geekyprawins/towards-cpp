#include <iostream>
using namespace std;

int main()
{
    // to print a half pyramid

    int n;
    cout << "Enter a value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < n - i - 1)
            {
                cout << "  ";
            }
            else
                cout << " *";
        }
        cout << endl;
    }

    return 0;
}
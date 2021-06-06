#include <iostream>
using namespace std;

int main()
{
    // to print a pyramid of numbers

    int n;
    cout << "Enter any value for n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << k + 1<<" ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // to print a palindromic number pattern

    int n;
    cout << "Enter any value for n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "  ";
        }
        for (int k = i + 1; k > 0; k--)
        {
            cout << k<<" " ;
        }
        for (int l = 0; l < i; l++)
        {
            cout << l + 2 <<" ";
        }
        cout << endl;
    }

    return 0;
}
